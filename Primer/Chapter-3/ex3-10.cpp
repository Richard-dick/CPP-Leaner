#include<iostream>
#include<string>
using namespace std;

int main()
{
    string line;
    if(cin >> line)
    {
        for(auto &c : line)
            if(!ispunct(c))
                cout<< c ;
    }    
}