#pragma once

#include <vector>
#include <iostream>

template <typename T>
class Singletons {
    public:
        static Singletons *getInstance()
	    {
		    if (_instance == nullptr)
			    _instance = new Singletons();
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
        Singletons() {}
        virtual ~Singletons() {}
        static Singletons *_instance;
        static std::vector<T> _list;

    private:
        Singletons(const Singletons&);
        Singletons& operator=(const Singletons&);
};

template <typename T>
Singletons<T>* Singletons<T>::_instance = nullptr;

template <typename T>
std::vector<T> Singletons<T>::_list;

