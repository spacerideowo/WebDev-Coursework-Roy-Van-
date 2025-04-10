#ifndef TESTARRAYS_H_INCLUDED
#define TESTARRAYS_H_INCLUDED

/* Constant Variable Declarations */

/* Note: the following arrays[][] are used for the last
   exercise. They are designed so that the path with the 7s
   as always the best path. This makes correctness easier to verify
   since it will be 7 * ROWS.
*/

const int COLS = 5;

// Test (treasure) Array 1
const int TA1_ROWS = 2;
int ta1[TA1_ROWS][COLS] = {{7,3,4,1,2},
                           {4,7,2,0,0}};

// Test (treasure) Array 2
const int TA2_ROWS = 4;
int ta2[TA2_ROWS][COLS] = {{2,7,4,0,4},
                           {7,3,2,0,5},
                           {3,7,4,5,7},
                           {2,0,7,4,5}};

// Test (treasure) Array 3
const int TA3_ROWS = 5;
int ta3[TA3_ROWS][COLS] = {{7,3,4,5,6},
                           {2,7,5,0,6},
                           {3,0,7,5,6},
                           {1,3,4,7,6},
                           {2,3,4,5,7}};

// Test (treasure) Array 4
const int TA4_ROWS = 10;
int ta4[TA4_ROWS][COLS] = {{7,3,4,0,6},
                           {2,7,5,5,6},
                           {1,3,7,5,6},
                           {2,3,4,7,6},
                           {2,3,4,5,7},
                           {6,0,4,5,7},
                           {1,6,0,7,6},
                           {2,3,7,5,6},
                           {5,0,4,7,6},
                           {2,3,4,5,7}};


// Collection Arrays
int collect_a1[TA1_ROWS][COLS];
int collect_a2[TA2_ROWS][COLS];
int collect_a3[TA3_ROWS][COLS];
int collect_a4[TA4_ROWS][COLS];


#endif // TESTARRAYS_H_INCLUDED
