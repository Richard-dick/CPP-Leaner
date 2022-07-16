#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;
    int num;
    while(cin >> num)
    {
        vec.push_back(num);
    }

    for(auto &tmp: vec)
    {
        cout << tmp << endl;
    }
    
}