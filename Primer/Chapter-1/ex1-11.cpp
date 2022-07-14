#include<iostream>

int main()
{
	int num1,num2;
    int min, max;
    std::cin >> num1 >>num2;
    min = (num1 > num2)?num2:num1;
    max = (num1 <= num2)?num2:num1;
    while(min != max)
    {
        std::cout << min++ << std::endl;
    }
    std::cout << min << std::endl;
	return 0;
}