//Name:Alok Chawat
//PRN:23070123016
//Aim:Implemention of Pointer Basics to find the Address Of Data Types after Increment

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    float b = 9.4;
    float *fptr = &b;
    bool d = 1;
    bool *dptr = &d;
    
    cout << "For Integer:"<<endl;
    cout << "Before increment-"<<endl;
    cout << ptr<< endl;
    ptr++;
    cout << "After increment-"<<endl;
    cout << ptr<< endl;
    cout<< endl;
    cout << "For Float:"<<endl;
    cout << "Before increment-"<<endl;
    cout << fptr<< endl;
    fptr++;
    cout << "After increment-"<<endl;
    cout << fptr<<endl;
    cout<< endl;
    cout << "For Boolean:"<<endl;
    cout << "Before increment-"<<endl;
    cout << dptr<< endl;
    dptr++;
    cout << "After incremen-t"<<endl;
    cout << dptr<<endl;
    cout<< endl;

    return 0;
}


/*Output:
For Integer:
Before increment-
0x7ffc111410a4
After increment-
0x7ffc111410a8

For Float:
Before increment-
0x7ffc111410a0
After increment-
0x7ffc111410a4

For Boolean:
Before increment-
0x7ffc1114109f
After incremen-t
0x7ffc111410a0
*/