#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    int val = 10;
    int val2 = 12;
    ptr = &val;
    cout << *ptr << endl;
    ptr = &val2;
    cout << *ptr << endl;

    val2 = val;
    cout << *ptr << endl;
    return 0;
}