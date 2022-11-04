/* From Hacker Rank, Section Problem Solving, Apple and Oranges
    Problem is; find number of apples and oranges falt from trees near a house, if they falt on the house.
*/


#include <iostream>
using namespace std;

int main() {

    int a = 0, s = 0, t = 0, b = 0;    //a=apple tree loc, b= orange tree loc, s=house left border, t=house right bordr 
    int apl = 0, orng = 0;  //fallen apples and oranges numbers
    int fallapl = 0, fallorng = 0;   //fallen on the house apples and oranges numbers
    cin >> s >> t >> a >> b >> apl >> orng;
    int aplloc[apl];    // fallen apples relative loc to apple tree
    int orngloc[orng];  // fallen oranges relative loc to orange tree
    for (int i = 0; i < apl; i++) { // takes fallne apples relative loc inputs
        cin >> aplloc[i];
        if ((aplloc[i] + a) >= s && (aplloc[i] + a) <= t) {   //check if they falt on house
            fallapl++;
        }
    }
    for (int i = 0; i < orng; i++) {    //takes fallne oranges relative loc inputs
        cin >> orngloc[i];
        if ((orngloc[i] + b) >= s && (orngloc[i] + b) <= t) { //check if they falt on house
            fallorng++;
        }
    }
    cout << fallapl << endl << fallorng;  //and print
}