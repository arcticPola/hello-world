#include "myVector.h"
#include <iostream>
#include <initializer_list>

template <typename T>
inline myVector<T>::myVector() : start(nullptr), finish(nullptr),end_of_storage(nullptr)
{
}

template <typename T>
myVector<T>::myVector(size_t n):start(new T[n * sizeof(T)]), finish(start + n),end_of_storage(finish)
{
}

template <typename T>
myVector<T>::myVector(size_t n, const T&val = T()):start(new T[n * sizeof(T)]),finish(start + n),end_of_storage(finish)
{
    for (int i = 0; i < n; i++)
    {
        start[i] = val;
    }
}

template <typename T>
myVector<T>::myVector(const myVector<T>& vec):start(new T),
{
    delete m_elem;
    this->m_elem = new T[m_size];
    for (int i = 0; i < m_size;i++)
    {
        m_elem[i] = vec.m_elem[i];
    }
}

template <typename T>
myVector<T>::myVector(initializer_list<T> li):start(new [li.size()]),finish(start + li.size()),end_of_storage(finish)
{
    auto it = start;
    for (const auto &x : li)
    {
        *it = x;
        it++;
    }
}

template <typename T>
myVector<T>::~myVector()
{
    m_size = 0;
    m_capacity = 0;
    delete m_elem;
}

template <typename T>
const T& myVector<T>::at(int index)
{
    // TODO: insert return statement here
}

template <typename T>
void myVector<T>::push_back(T &a)
{
}

template <typename T>
void myVector<T>::push_back(T &&a)
{
}

template <typename T>
T *myVector<T>::begin()
{
    return nullptr;
}

template <typename T>
T *myVector<T>::end()
{
    return nullptr;
}

template <typename T>
bool myVector<T>::empty()
{
    return false;
}

// template <typename T>
// const T& myVector<T>::operator[](int index) const
// {
//     // TODO: insert return statement here
// }

template <typename T>
myVector<T>& myVector<T>::operator=(const myVector<T>&vec)
{
    this->m_size = vec.m_size;
    this->m_capacity = vec.

}

template <typename T>
T& myVector<T>::operator[] (int index) const
{
    // TODO: 在此处插入 return 语句
}

int main()
{
    std::cout << "kkfkk";
    myVector<int> v1(6);
    // cout << v1[3] << "\n";
    return 0;
}