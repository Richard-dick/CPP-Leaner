#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    //equal
    
    if(str1 == str2)
    {
        cout << "equal: true" << endl;
    }else if(str1 > str2)
    {
        cout << "bigger: " << str1 << endl;
    }else{
        cout << "bigger: " << str2 << endl;
    }

    //equal length

    if(str1.size() == str2.size())
    {
        cout << "equal size: true" << endl;
    }else if(str1.size() > str2.size())
    {
        cout << "bigger: " << str1 << endl;
    }else{
        cout << "bigger: " << str2 << endl;
    }

}