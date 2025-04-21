#include <iostream>
using namespace std;
#include "queues.cpp"

int main(){
    Queue qataar(7);
    qataar.enqueue(1);
    qataar.enqueue(2);
    qataar.enqueue(3);
    qataar.enqueue(4);
    qataar.enqueue(5);
    qataar.enqueue(6);
    cout << qataar.first();
    qataar.dequeue();
    cout << qataar.first();
    qataar.dequeue();
    cout << qataar.first();
    return 0;
} 

/* There's real meaninig in the struggle, real purpose and sense of fullfillnes in the struggle. */