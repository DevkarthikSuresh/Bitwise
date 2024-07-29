//Name - Devarthik Suresh
//PRN - 23070123045
//Aim - Performing Bitwise operations
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Bitwise Operations"<<endl;
    cout << "Enter the number1:";
    cin >> a;
    cout << "Enter the number2:";
    cin >> b;
    cout << "AND:"<< (a & b)<< endl;
    cout << "OR:" << (a|b)<< endl;
    cout << "NOT:" << (~a)<< endl;
    cout << "XOR:" << (a^b)<< endl;
    cout << "Left Shift:" << (a<<1)<< endl;
    cout << "Right Shift:" << (a>>2)<< endl;

    return 0;
}
/* Output-
Bitwise Operations
Enter the number1:5
Enter the number2:6
AND:4
OR:7
NOT:-6
XOR:3
Left Shift:10
Right Shift:1
*/