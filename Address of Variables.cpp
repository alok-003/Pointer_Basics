//Name:Alok Chawat
//PRN:23070123016
//Aim:Implemention of Pointer Basics to find the Address Of given Variables

#include <iostream>
using namespace std;
int main() {
    int a=10;
    int *aptr;
    aptr=&a;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;

    return 0;
}


/*Output:
0x7ffea5d78b24
0x7ffea5d78b24
10*/