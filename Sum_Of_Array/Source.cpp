/* From Hacker Rank, Problem Solving Section, Simple Array Sum

Given an array of integers, find the sum of its elements.
*/
#include <iostream>
using namespace std;

int main()
{
    int Sum_Array=0;
    int ArraySize;
    cin >> ArraySize;
    int *Array=new int[ArraySize];
    for (int i = 0; i < ArraySize; i++) {
        cin >> Array[i];
        Sum_Array += Array[i];
    }
    delete[] Array;
    cout << Sum_Array;
}
