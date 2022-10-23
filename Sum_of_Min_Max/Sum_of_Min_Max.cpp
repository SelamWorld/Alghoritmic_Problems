/*  From Hackerrank.com. Section: Problem Solving. Question: Mini-Max Sum 
    
    Given five positive integers,
    find the minimum and maximum values that can be calculated by summing exactly four of the five integers.
    Then print the respective minimum and maximum values as a single line of two space-separated long integers.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long Ar[5] = { 1,2,3,4,5 }, Max = 0, Min = 0;
    for (int i = 0; i < 5; i++) {
        cin >> Ar[i];
    }
    sort(Ar, Ar + 5);
    for (int i = 0; i < 5; i++) {
        if (i < 4) {
            Min += Ar[i];
        }
        if (i > 0) {
            Max += Ar[i];
        }
    }
    cout << Min << " " << Max;
}