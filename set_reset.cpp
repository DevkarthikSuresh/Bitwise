//Name - Devarthik Suresh
//PRN - 23070123045
//Aim - Performing Bitwise set and reset.
#include <iostream>
using namespace std;

int main() { int a,i,set,reset;
    // Write C++ code here
    cout << "Enter the number";
    cin >> a;
    cout << "Enter the places to shift";
    cin >> i;
    set = a|(1<<i);
    reset = a&(~(1<<i));
    cout << "reset: "<<reset<< endl;
    cout << "set: "<<set;



    return 0;
}
/* Output-
 * Enter the number5
Enter the places to shift2
reset: 1
set: 5
 */
