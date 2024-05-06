#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>
#include <iostream>
#include <time.h>
#include <vector>

class Command
{
    public:
        virtual ~Command() {}
        Command(std::vector<std::pair<std::string, double> > article, std::string client): id(nextId++), _client(client), _articles(article)
        {
            time_t     now = time(0);
            struct tm  tstruct;
            char       buf[80];
            tstruct = *localtime(&now);
            strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
            _date = buf;
        }
        virtual double get_total_price() const{
            std::cout << "normal command no discount" << std::endl;
            double total = 0.0;
            for (long unsigned int i = 0; i < _articles.size(); ++i)
                total += _articles[i].second;
            return total;
        }
        int getId() const{
            return this->id;
        }
        std::string getDate() const{
            return this->_date;
        }
        std::string getClient() const{
            return this->_client;
        }
        std::vector<std::pair<std::string, double> > getArticle() const{
            return this->_articles;
        }
    protected:
        static int nextId;
        const int id;
        std::string _date;
        const std::string _client;
        std::vector<std::pair<std::string, double> > _articles;
};

int Command::nextId = 1;

#endif