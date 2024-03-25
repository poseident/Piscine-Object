#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>
#include <iostream>

class Command
{
    public:
        Command(std::string article, std::string date, std::string client): id(nextId++) ,_date(date), _client(client), _articles(article) {}
        virtual float get_total_price() const{
            std::cout << "normal command no discount" << std::endl;
            return (50.20);
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
        std::string getArticle() const{
            return this->_articles;
        }
    protected:
        static int nextId;
        const int id;
        const std::string _date;
        const std::string _client;
        const std::string _articles;
};

int Command::nextId = 1;

#endif