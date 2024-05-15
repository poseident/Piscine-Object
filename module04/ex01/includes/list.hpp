#ifndef LIST_HPP
#define LIST_HPP

#include <vector>

template <typename T>
class List
{
    public:
        virtual ~List() {}
        List() {}
        void addList(T &add)
        {
            _lists.push_back(add);
        }
    private:
        std::vector<T*> _lists;
};



#endif