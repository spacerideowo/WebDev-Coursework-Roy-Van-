#include <iostream>
#include "array2D.h"
#include "testArrays.h"

using namespace std;

int main() {
    cout << "Original Treasure Map (TA4):" << endl;
    printArr2d(ta4, TA4_ROWS);

    int maxSum = rowSum(ta4, 2, TA4_ROWS);
    cout << "Sum of row 2: " << maxSum << endl;

    int maxRowVal = rowMax(ta4, 3);
    cout << "Max value in row 3: " << maxRowVal << endl;

    int maxTreasure = maximumTreasure(ta4, collect_a4, TA4_ROWS);
    cout << "Maximum treasure collected: " << maxTreasure << endl;


    cout << "\nOriginal Treasure Map (TA1):" << endl;
    printArr2d(ta1, TA1_ROWS);

    int maxTreasure1 = maximumTreasure(ta1, collect_a1, TA1_ROWS);
    cout << "Maximum treasure collected: " << maxTreasure1 << endl;


    cout << "\nOriginal Treasure Map (TA2):" << endl;
    printArr2d(ta2, TA2_ROWS);

    int maxTreasure2 = maximumTreasure(ta2, collect_a2, TA2_ROWS);
    cout << "Maximum treasure collected: " << maxTreasure2 << endl;


    cout << "\nOriginal Treasure Map (TA3):" << endl;
    printArr2d(ta3, TA3_ROWS);

    int maxTreasure3 = maximumTreasure(ta3, collect_a3, TA3_ROWS);
    cout << "Maximum treasure collected: " << maxTreasure3 << endl;

    return 0;
}
