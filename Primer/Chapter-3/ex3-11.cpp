#include<iostream>
#include<string>
using namespace std;

int main()
{
    const string line = "Keep out!!";
    for(auto &c : line)
        if(!ispunct(c))
            cout<< c ;
    
}