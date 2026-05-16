#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 10;
const int NUM_ROWS = 6;
const int NUM_COLS = 5;

void findMaxSum(int[], int[][NUM_COLS], int, int);
void findMaxElm(int[], int[][NUM_COLS], int, int);
void findMaxVal(int[], int[][NUM_COLS], int, int);

void findMaxSum(int result[], int num[][NUM_COLS], int rows, int cols)
{
    int maxRow = 0;
    int maxSum = 0;

    for (int j = 0; j < cols; ++j)
    {
        maxSum += num[0][j];
    }

    for (int i = 1; i < rows; ++i)
    {
        int rowSum = 0;
        for (int j = 0; j < cols; ++j)
        {
            rowSum += num[i][j];
        }

        if (rowSum > maxSum)
        {
            maxSum = rowSum;
            maxRow = i;
        }
    }

    for (int j = 0; j < cols; ++j)
    {
        result[j] = num[maxRow][j];
    }
}

void findMaxElm(int result[], int num[][NUM_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        int rowMax = num[i][0];
        for (int j = 1; j < cols; ++j)
        {
            if (num[i][j] > rowMax)
            {
                rowMax = num[i][j];
            }
        }
        result[i] = rowMax;
    }
}

void findMaxVal(int result[], int num[][NUM_COLS], int rows, int cols)
{
    int maxRow = 0;
    int maxVal = num[0][0];

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (num[i][j] > maxVal)
            {
                maxVal = num[i][j];
                maxRow = i;
            }
        }
    }

    for (int j = 0; j < cols; ++j)
    {
        result[j] = num[maxRow][j];
    }
}

#endif
