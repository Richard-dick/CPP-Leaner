#include<iostream>
#include<string>
using namespace std;

int main()
{
    /*string word;
    while(cin>>word)
        cout<<word;*/

    string line, temp;
    while(cin >> line)
    {
        while(cin >> temp)
            if(!temp.empty())
            {
                line += " ";
                line += temp;
            }
        cout<<line;
    }    
}