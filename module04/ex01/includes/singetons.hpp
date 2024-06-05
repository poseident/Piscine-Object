#pragma once

#include <vector>
#include <iostream>

template <typename T>
class Singetons {
    public:
        static Singleton *getInstance()
	    {
		    if (_instance == nullptr)
			    _instance = new Singleton();
		    return _instance;
	    }
        void add(const T& item) {
            _list.push_back(item);
        }

        void remove(const T& item) {
            _list.erase(std::remove(_list.begin(), _list.end(), item), _list.end());
        }

        std::vector<T> getAll() const {
            return _list;
        }

        virtual void validate(const T& item) const = 0;

    protected:
        Singetons() {}
        ~Singetons() {}
        static Singleton *_instance;
        std::vector<T> _list;

    private:
        Singetons(const Singetons&);
        Singetons& operator=(const Singetons&);
};

#endif // SINGLETON_LIST_H
