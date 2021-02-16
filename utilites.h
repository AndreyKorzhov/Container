#ifndef CONTAINER_UTILITES_H
#define CONTAINER_UTILITES_H

#include <iostream>
#include "Stack.h"

using namespace std;

template<typename D>
void PrintEmpty(Queue<D> queue)
{
    if (queue.isEmpty()) {
        cout << "Стек пустой" << endl;
    } else {
        cout << "Стек не пустой" << endl;
    }
}

void Print(int num)
{
    cout << num << endl;
}

int Add10(int num)
{
    return num + 10;
}
void PrintSize(int num)
{
cout << "Size : " << num << endl;
}

#endif //CONTAINER_UTILITES_H
