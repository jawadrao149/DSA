#include <iostream>
using namespace std;
int main() {

    int students, subjects;

    cout << "Enter the number of students: ";
    bool satisfied = false;
    while (!satisfied)
    {
        cin >> students;
        if (students > 0)
        {
            satisfied = true;
        }
        else
        {
            cout << "Invalid number of students. Please enter a positive integer." << endl;
        }
    }    
    satisfied = false;
    cout << "Enter the number of subjects: ";
    while (!satisfied)
    {
        cin >> subjects;
        if (subjects > 0)
        {
            satisfied = true;
        }
        else
        {
            cout << "Invalid number of subjects. Please enter a positive integer." << endl;
        }
    }

    int** marks = new int*[students];

    for (int i = 0; i < students; i++) {
        marks[i] = new int[subjects];
    }

    // Use it
    for (int i = 0; i < students; i++) {
        for (int j = 0; j < subjects; j++) {
            cin >> marks[i][j];
            if (marks[i][j]<0 || marks[i][j]>100)
            {
                cout<< "Invalid score. Please enter a score greater than or equal to 0 and less than or equal to 100." << endl;
            
            }
        }
    }

    // Free memory
    for (int i = 0; i < students; i++) {
        delete[] marks[i];
    }

    delete[] marks;

    return 0;
}