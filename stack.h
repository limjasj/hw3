#ifndef STACK_H
#define STACK_H

#include <vector>
#include <stdexcept>

// Use inheritance from std::vector (choose public/private) as appropriate
template <typename T>
class Stack : private std::vector<T>
{
public:
    Stack();
    ~Stack();
    bool empty() const;
    size_t size() const;
    void push(const T& item);
    void pop();  // throws std::underflow_error if empty
    const T& top() const; // throws std::underflow_error if empty
    // Add other members only if necessary


};

template<typename T>
Stack::Stack()
{

}

template<typename T>
Stack::Stack()
{
    std::vector<T>::erase();
}


template<typename T>
size_t Stack::size() const
{
    return std::vector<T>::size();
}

template<typename T>
bool Stack::empty() const
{
    return std::vector<T>::empty();
}

template<typename T>
void Stack::push(const T& item)
{
    std::vector<T>::push_back(item);  
}

template<typename T>
void Stack::pop()
{
    std::vector<T>::pop_back();  
}

template<typename T>
const T& Stack::top() const
{
    if (std::vector<T>::empty())
    {
        std::underflow_error("Stack empty");
    }
    return std::vector<T>::front();
}


#endif