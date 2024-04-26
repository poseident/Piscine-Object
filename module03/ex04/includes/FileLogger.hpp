#ifndef FILELOGGER_HPP
#define FILELOGGER_HPP

#include "ILogger.hpp"

class FileLogger : public ILogger
{
    public:
        FileLogger(const std::string& filename, const std::string& header = "") : _header(header) {
            _file.open(filename.c_str(), std::ios::app); // Open file in append mode
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