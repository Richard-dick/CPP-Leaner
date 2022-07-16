#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string> vec;
    string str;
    while(getline(cin,str))
    {
        vec.push_back(str);
    }

    for(auto &tmp: vec)
    {
        cout << tmp << endl;
    }
    
}