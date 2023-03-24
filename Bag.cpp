#include "Bag.h"
#include <cstdlib>

template <class T>
void Bag<T>::addItem(T item)
{
    items.push_back(item);
}

template <class T>
void Bag<T>::removeItem()
{
    items.erase(rand() % items.size());
}