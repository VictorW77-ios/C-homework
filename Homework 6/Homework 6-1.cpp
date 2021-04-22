//Purpose : To read 6 numbers. Find sum, product, and average of these numbers. 
//Inputs : Six numbers
// Outputs: Sum, product, and average of six numbers.
// Test Condition(s): Test for any real numbers.
// Exception: None

#include <iostream> 
#include <string>
using namespace std;

int main(void) 
{
    // Declare Variables
    double Number, Sum, Product, Average;
    int LCV, Size = 6;
    // Always initialize Sum to Zero
    Sum = 0;
    // Always initialize product to one
    Product = 1;
        for (LCV = 0; LCV < Size; LCV++) 
        {
            cout <<"enter a number \n"; cin >> Number;
            Sum = Sum + Number; Product = Product * Number;
        }
    Average = Sum / Size;
    cout <<" Sum of " << Size << " numbers = " << Sum << endl;
    cout <<" Product of " << Size << " numbers = " << Product << endl; 
    cout <<" Average of " << Size << " numbers = " << Average << endl; 
    system ("pause");
    return 0;
}