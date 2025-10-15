#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float x, y; 

    cout << "Enter the first floating value: ";
    cin >> x; 
    cout << "Enter the second floating value: ";
    cin >> y; 
   
    cout << "Operations using Floating-Point Numbers" << endl;
   
    
    cout << fixed << setprecision(3);
    cout << "Addition Result: " << x + y << endl;
    cout << "Subtraction Result: " << x - y << endl;
    cout << "Multiplication Result: " << x * y << endl;
    cout << "Division Result: " << x / y << endl;

   
    cout << "After Converting to Integer Type" << endl;
    
    
    int val1 = static_cast<int>(x);
    int val2 = static_cast<int>(y);

   
    cout << "Addition: " << val1 + val2 << endl;
    cout << "Subtraction: " << val1 - val2 << endl;
    cout << "Multiplication: " << val1 * val2 << endl;
    cout << "Division: " << val1 / val2 << endl;

   

    return 0;
}
