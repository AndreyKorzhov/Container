#ifndef CONTAINER_STACK_H
#define CONTAINER_STACK_H

#include <vector>
#include "Exception.h"

using namespace std;

template<class T>
class Queue {
private:
    vector<T> container;
public:
    Queue() {}
    Queue(vector<T> container)
    {
        this->container = container;
    }
    //TODO Написать конструктор копирования
    /*
    Stack(Queue stack)
    {
        container = stack;
    }
    */

    void Push(T value)
    {
       /* auto it = container.cbegin();
        container.insert(it,value);*///В начало

        container.push_back(value);
    }
    T Pop_dequeue()
    {
        if (isEmpty()) {
            throw Exception::Bottom;
        } else {
            auto iter = container.begin();
            T temp = *iter;
            container.erase(iter);
            return temp;
        }
    }

    T Fetch()
    {
        if (isEmpty()) {
            throw Exception::Bottom;
        } else {
            auto iter = container.begin();
            T temp = *iter;
            return temp;
        }
    }

    void Clear()
    {
        container.clear();
    }

    bool isEmpty()
    {
        /*
        if (container.empty()) {
            return true;
        } else {
            return false;
        }
        */

        return container.empty();
    }

    void ForEach(void(*Func)(T))
    {
        for (auto i = container.begin(); i < container.end(); ++i) {
            Func(*i);
        }
    }
    void ForEach(T(*Func)(T))
    {
        for (auto i = container.begin(); i < container.end(); ++i) {
            *i = Func(*i);
        }
    }

    void SizeContainer(void(*Func)(T))
    {
        int num = container.size();
        Func (num);

    }
};

#endif //CONTAINER_STACK_H
