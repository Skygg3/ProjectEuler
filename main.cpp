#include <iostream>


int problem1()
{
    int sum = 0;
    for(int i = 1; i < 1000; ++i)
    {
        if(i%3 == 0 || i%5 == 0) sum += i;
    }

    return sum;
}

int main()
{
    std::cout << problem1() << '\n';

    return 0;
}