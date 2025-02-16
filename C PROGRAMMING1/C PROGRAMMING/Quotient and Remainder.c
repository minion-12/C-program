#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    int A = 17, B = 5;
 
    // Ask user to enter the two numbers
    cout << "Enter two numbers A and B: ";
 
    // Read two numbers from the user || A = 17, B = 5
    cin >> A >> B;
 
    // Calculate the quotient of A and B using '/' operator
    int quotient = A / B;
 
    // Calculate the remainder of A and B using '%' operator
    int remainder = A % B;
 
    // Print the result
    cout << "Quotient when A / B is: " << quotient << endl;
    cout << "Remainder when A / B is: " << remainder;
}
 
