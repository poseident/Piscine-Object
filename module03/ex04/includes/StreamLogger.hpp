#ifndef STREAMLOGGER_HPP
#define STREAMLOGGER_HPP

#include "ILogger.hpp"

class StreamLogger : public ILogger
{
    public:
        StreamLogger(std::ostream& outputStream, const std::string &header): _stream(outputStream), _header(header) {}
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