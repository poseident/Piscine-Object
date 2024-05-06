#ifndef STREAMLOGGER_HPP
#define STREAMLOGGER_HPP

#include "ILogger.hpp"
#include <time.h>

class StreamLogger : public ILogger
{
    public:
        StreamLogger(std::ostream& outputStream, const std::string &header): _stream(outputStream), _header(header) {}
        StreamLogger(std::ostream& outputStream): _stream(outputStream), _header() {}
        StreamLogger(std::ostream& outputStream, unsigned int): _stream(outputStream) {
            time_t     now = time(0);
            struct tm  tstruct;
            char       buf[80];
            tstruct = *localtime(&now);
            strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
            _header = buf;
        }
        ~StreamLogger() {}
        virtual void write(std::string const &text) {
            if (!_header.empty()) {
               _stream << _header << ": " << text << std::endl;
            }
            else {
                _stream << text << std::endl;
            }
        }
    private:
        std::ostream& _stream;
        std::string _header;
};

#endif