#include<iostream>
#include<string>
using namespace std;

int main()
{

    string line, temp;
    if(cin >> line)
    {
        while(getline(cin, temp))
        {
            line += " ";
            line += temp;
        }
        cout<<line<<endl;
    }    
}