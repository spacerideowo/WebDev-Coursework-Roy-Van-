/*
   Exercise: create a program that
      1. Prompts the user for a value 'nCount' between 1 and MAX_N inclusive (with error checking
         for integers out of range)
      2. Reads the first nCount numbers from the file "1000numbers.txt" (with error checking)
      3. Calculates the maximum, minimum, sum, average and median of the first nCount integers
         to the file "summary.txt" (with error checking)

         Median: if nCount is odd, return the middle number
                 if it is even, display the average of the two middle numbers

      Note:
      - You should create a statistics.h and a statistics.cpp file that contain the necessary
      functions (that take an array of floats and the array size as parameters). Used for
      calculating the maximum, minimum, sum, average and median.

*/

#include <iostream>
#include <fstream>

const int MAX_N = 1000; // the maximum number of integers read from the file

using namespace std;

int main()
{
   string inFilename = "1000numbers.txt";
   string outFilename = "summary.txt";
   // declare an array to store the numbers in
   float sampleData[MAX_N];
   int nCount;


   return 0;
}
