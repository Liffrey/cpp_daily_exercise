//! template version 2.3
// https://leetcode.com/problems/fibonacci-number/

// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).

// Example 1:

// Input: n = 2
// Output: 1
// Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
// Example 2:

// Input: n = 3
// Output: 2
// Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
// Example 3:

// Input: n = 4
// Output: 3
// Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.

// Constraints:

// 0 <= n <= 30

// level : easy

#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    //! Base case

    //! resursive logic
    // F(0)=0 , F(1)=1
    // F(n)=F(n-1)+F(n-2)
    // n=3 için
    // F(3)= F(2)+F(1)
    // F(2)= F(1)+F(0)

    // F(5)= F(4)+sum 2+3 5
    // F(4)= F(3)+F(2) 2+1 3
    // F(3)= F(2)+F(1) 1+1 2
    // F(2)= F(1)+F(0) 1

    return fib(n-1)+fib(n-2);
}

int main()
{
    int result = 0;
    result = fib(5);
    return 0;
}