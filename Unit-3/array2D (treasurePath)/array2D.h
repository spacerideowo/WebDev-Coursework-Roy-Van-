#ifndef ARRAY2D_H_INCLUDED
#define ARRAY2D_H_INCLUDED

/* Function Declarations */
const int NUM_COLS = 5;

void printArr2d(int arr[][NUM_COLS], int rows);
/*
   Uses cout to print the 2D array as a comma-separated list per row.
*/

int rowSum(int arr[][NUM_COLS], int rowNum, int rows);
/*
   Finds the sum of the elements in rowNum.
*/

int rowMax(int arr[][NUM_COLS], int rowNum);
/*
   Finds the largest element in the rowNum row.
*/

int maximumTreasure(int treasure[][NUM_COLS], int collection[][NUM_COLS], int rows);
/*
   Finds the maximum treasure path using dynamic programming.
*/

int maximumParent(int arr[][NUM_COLS], int rows, int rNum, int cNum);
/*
   Finds the maximum value from the three parent cells above a given cell.
*/

#endif // ARRAY2D_H_INCLUDED
