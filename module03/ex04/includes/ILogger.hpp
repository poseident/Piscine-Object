#ifndef ILOGGER_HPP
#define ILOGGER_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <ctime>

class ILogger
{
    public:
        virtual void write(std::string const &text) = 0;
        virtual ~ILogger() {}
    private:
};

#endif