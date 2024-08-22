#pragma once

template<typename T>
class myVector
{
public:
    myVector();
    myVector(int s);
    myVector(int s, T a);
    ~myVector();

private:
    T *m_elem;
    int m_size;
    int m_capacity;
};


