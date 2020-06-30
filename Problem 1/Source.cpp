/*
    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
    The sum of these multiples is 23.
    Find the sum of all the multiples of 3 or 5 below 1000.
    Ans: 233168
*/

#include <iostream>

int SumDivisibleBy(int num, int n)
{
    int p = n / num;

    return num * (p * (p + 1)) / 2;
}

int main()
{
    int n = 999;
    
    std::cout << SumDivisibleBy(3, n) + SumDivisibleBy(5, n) - SumDivisibleBy(15, n);
}