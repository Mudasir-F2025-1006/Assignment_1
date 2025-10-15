#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    int greatest, smallest;

    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Enter the third number: ";
    cin >> n3;

    
    if (n1 == n2 && n1 == n3) {
        cout << "\nAll numbers are equal. Please enter different numbers!";
    } 
    else if (n1 == n2 || n1 == n3 || n2 == n3) {
        cout << "\nTwo numbers are equal. Enter distinct numbers!";
    } 
    else {
       
        if (n1 > n2 && n1 > n3)
            greatest = n1;
        else if (n2 > n1 && n2 > n3)
            greatest = n2;
        else
            greatest = n3;

        
        if (n1 < n2 && n1 < n3)
            smallest = n1;
        else if (n2 < n1 && n2 < n3)
            smallest = n2;
        else
            smallest = n3;

        
        cout << "\nGreatest Number: " << greatest;
        cout << "\nSmallest Number: " << smallest;
        
    }

   

    return 0;
}
