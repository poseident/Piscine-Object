// path/singleton_list.h
#ifndef SINGETON_LIST_H
#define SINGETON_LIST_H

#include <vector>
#include <algorithm>

template <typename T>
class SingetonList {
public:
    void add(const T& item) {
        items.push_back(item);
    }

    void remove(const T& item) {
        items.erase(std::remove(items.begin(), items.end(), item), items.end());
    }

    std::vector<T> getAll() const {
        return items;
    }

    virtual void validate(const T& item) const = 0;

protected:
    std::vector<T> items;
};

#endif // SINGLETON_LIST_H
