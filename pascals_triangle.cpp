//! template version 2.3
// https://leetcode.com/problems/pascals-triangle/

// Given an integer numRows, return the first numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

// Example 1:

// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
// Example 2:

// Input: numRows = 1
// Output: [[1]]

// Constraints:

// 1 <= numRows <= 30

// level:easy
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> generate(int numRows)
{
    //basecase
    if (numRows==2)
    return {[1],[1,1]};
}

int main()
{
    return 0;
}