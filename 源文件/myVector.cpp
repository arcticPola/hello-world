#include "myVector.h"
#include <iostream>

template <typename T>
inline myVector<T>::myVector():m_size(0),m_capacity(0)
{
}

template <typename T>
myVector<T>::myVector(int s):m_size(s),m_capacity(s),m_elem(new T[s])
{
}

template <typename T>
myVector<T>::myVector(int s, T a):m_size(s),m_capacity(s),m_elem(new T[s])
{
    for (int i = 0;i<s;i++)
    {
        m_elem[i] = a;
    }
}

int main()
{
    std::cout << "kkfkk";
    return 0;
}