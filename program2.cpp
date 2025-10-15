#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;  // marks of 5 subjects
    string grade, status;

    cout << "Enter the marks obtained in each subject (out of 100):" << endl << endl;
    cout << "Subject 1 Marks: ";
    cin >> m1;
    cout << "Subject 2 Marks: ";
    cin >> m2;
    cout << "Subject 3 Marks: ";
    cin >> m3;
    cout << "Subject 4 Marks: ";
    cin >> m4;
    cout << "Subject 5 Marks: ";
    cin >> m5;

    // Calculate total obtained marks
    int totalObtained = m1 + m2 + m3 + m4 + m5;

    // Calculate percentage
    float percent = (static_cast<float>(totalObtained) / 500.0f) * 100;

    cout << endl;

    // Determine grade
    if (percent >= 90)
        grade = "A+";
    else if (percent >= 80)
        grade = "A";
    else if (percent >= 70)
        grade = "B";
    else if (percent >= 60)
        grade = "C";
    else if (percent >= 50)
        grade = "D";
    else
        grade = "F";

    
    status = (percent >= 50) ? "Pass" : "Fail";

    
  

    cout << setw(15) << left << "Total Marks"
         << setw(20) << left << "Marks Obtained"
         << setw(15) << left << "Percentage"
         << setw(10) << left << "Grade"
         << "Status" << endl;

    cout << fixed << setprecision(2);
    cout << setw(15) << left << "500"
         << setw(20) << left << totalObtained
         << setw(15) << left << percent
         << setw(10) << left << grade
         << status << endl;

  
    

    return 0;
}
