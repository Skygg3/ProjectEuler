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

long long problem2()
{
    int fibn2 = 1;
    int fibn1 = 2;
    int fibn = fibn1 + fibn2;
    long long sum = 2;

    while(fibn < 4000000)
    {
        if(fibn%2 == 0) sum += fibn;

        fibn2 = fibn1;
        fibn1 = fibn;
        fibn = fibn1 + fibn2;
    }

    return sum;
}

int main()
{
    std::cout << problem1() << '\n';
    std::cout << problem2() << '\n';

    return 0;
}
