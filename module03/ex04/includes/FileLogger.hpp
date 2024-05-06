#ifndef FILELOGGER_HPP
#define FILELOGGER_HPP

#include "ILogger.hpp"
#include <time.h>

class FileLogger : public ILogger
{
    public:
        FileLogger(const std::string& filename, const std::string &header): _header(header) {
            _file.open(filename.c_str());
            if (!_file.is_open()) {
                std::cerr << "Error: Could not open file " << filename << std::endl;
            }
        }
        FileLogger(const std::string& filename): _header() {
            std::cout << "FileLogger constructor called" << std::endl;
            _file.open(filename.c_str());
            if (!_file.is_open()) {
                std::cerr << "Error: Could not open file " << filename << std::endl;
            }
        }
        FileLogger(const std::string& filename, unsigned int) {
            time_t     now = time(0);
            struct tm  tstruct;
            char       buf[80];
            tstruct = *localtime(&now);
            strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
            _header = buf;

            _file.open(filename.c_str());
            if (!_file.is_open()) {
                std::cerr << "Error: Could not open file " << filename << std::endl;
            }
        }
        ~FileLogger() {
            if (_file.is_open()) {
                _file.close();
            }
        }
        virtual void write(std::string const &text) {
            if (_file.is_open()) {
                if (!_header.empty()) {
                    _file << _header << ": ";
                }
                _file << text << std::endl;
            }
        }
    private:
        std::ofstream _file;
        std::string _header;
};

#endif