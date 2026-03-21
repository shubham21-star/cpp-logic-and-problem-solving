#include <iostream>
using namespace std;

int main() {
    char student[50];
    int roll_no, m, e, h, s, st, total;
    float percent;
    char grade;

    // Get student info
    cout << "Enter NAME: ";
    cin >> student; 
    cout << "Enter ROLL NO: ";
    cin >> roll_no;

    cout << "Enter marks of 5 subjects: ";
    cin >> m >> e >> h >> s >> st;

    // calculate total & percent
    total = m + e + h + s + st;
    percent = total / 5.0;

    // decide grade
    if (percent > 90) grade = 'A';
    else if (percent >= 80 && percent <= 90) grade = 'B';
    else if (percent >= 70 && percent < 80) grade = 'C';
    else if (percent >= 50 && percent < 70) grade = 'D';
    else grade = 'F';

    // Display marksheet
    cout << "\n------------------- MARKSHEET -------------------\n";
    cout << "Name      : " << student << "\n";
    cout << "Roll No   : " << roll_no << "\n";
    cout << "Subject 1 : " << m << "\n";
    cout << "Subject 2 : " << e << "\n";
    cout << "Subject 3 : " << h << "\n";
    cout << "Subject 4 : " << s << "\n";
    cout << "Subject 5 : " << st << "\n";
    cout << "-----------------------------------------------\n";
    cout << "Total     : " << total << "\n";
    cout << "Percent   : " << percent << "\n";
    cout << "Grade     : " << grade << "\n";
    cout << "------------------------------------------------\n";

    return 0;
}