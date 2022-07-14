#include<iostream>

int main()
{
	int sum, value;
    sum = 0;
    while(std::cin >> value)
        sum += value;

    std::cout << "The sum is " << sum << std::endl;
	return 0;
}