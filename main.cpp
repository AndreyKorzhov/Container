#include <iostream>
#include "Stack.h"
#include "utilites.h"
#include "Exception.h"

using namespace std;

int main() {
    system("chcp 65001");

    Queue<int> queue;
    PrintEmpty(queue);

    queue.Push(5);
    queue.Push(7);
    queue.Push(10);
    PrintEmpty(queue);
    queue.SizeContainer(PrintSize);
    queue.ForEach(Print);
    queue.Pop_dequeue();
    queue.SizeContainer(PrintSize);

    queue.ForEach(Print);
    queue.SizeContainer(PrintSize);
    queue.ForEach(Add10);
    queue.ForEach(Print);
    
    return 0;
}
