#include<iostream>
#include<string>
using namespace std;

int main()
{
    string line;
    if(cin >> line)
    {
        for(char &c : line)
            c = 'X';

        cout << line << endl;
    }    
}