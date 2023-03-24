#ifndef BAG
#define BAG
#include <vector>

template <class T>
class Bag
{
private:
    std::vector<T> items;

public:
    void addItem(T item);
    void removeItem();
};

#endif