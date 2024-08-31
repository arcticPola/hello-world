#pragma once
#include <initializer_list>

template<typename T>
class myVector
{
public:
    using Iterator = T *;
    using const_Iterator = const T *;
    myVector();
    myVector(size_t n);
    myVector(size_t n, const T &val = T());
    myVector(const myVector<T> &vec);
    myVector(initializer_list<T> li);
    ~myVector();
    template <typename iterator>
    myVector(iterator firsh, iterator last);
    myVector<T> &operator=(const myVector<T> &vec);
    myVector<T> &operator=(initializer_list<T> li);
    T &operator[](size_t index) const;
    // const T& operator[] (int index) const;
    const T& at(int index);
    void push_back(T &a);
    void push_back(T &&a);
    T *begin();
    T *end();
    bool empty();
    size_t size();
    size_t capacity();
    void resize(size_t size);
    const T &front();
    const T& back();

private:
    // T *m_elem;
    // int m_size;
    // int m_capacity;
    Iterator start;
    Iterator finish;
    Iterator end_of_storage;
};
