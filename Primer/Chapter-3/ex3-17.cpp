#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string> vec;
    string word;
    while(cin>>word)
    {
        vec.push_back(word);
    }

    for(auto &tmp: vec)
    {
        for( auto &c : tmp) c = toupper(c);
        cout << tmp << endl;
    }
    
}