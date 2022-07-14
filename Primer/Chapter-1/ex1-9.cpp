#include<iostream>

int main()
{
	int begin;
    begin = 50;
    int sum = 0;
    while(begin != 101)
    {
        sum += (begin++);
    }
    std::cout << sum << std::endl;
	return 0;
}