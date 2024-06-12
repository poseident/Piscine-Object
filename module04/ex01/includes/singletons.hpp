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
        static void add(const T& item) {
            _list.push_back(item);
        }

        static void remove(const T& item) {
            std::cout << "inside remove method" << std::endl;
            typename std::vector<T>::iterator it2 = _list.end();
            for (typename std::vector<T>::iterator it = _list.begin(); it != _list.end(); ++it)
            {
                if (*it == item) {
                    std::cout << item << " removed from the list" << std::endl;
                    _list.erase(it);
                }
            }
        }

        static std::vector<T> getList() {
            return _list;
        }

        T operator[](int index)
        {
            if (index < 0 || index >= _list.size())
                throw std::out_of_range("Index out of range");
            return _list[index];
        }
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

