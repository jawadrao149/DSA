#include <iostream>
using namespace std;
int main() {
    cout << "Please enter the number of students: ";
    int n;
    cin >> n;
    int* scores = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter score for student " << (i + 1) << ": ";
        cin >> *(scores + i);
        if (scores[i]<0 || scores[i]>100 )
        {
            cout << "Invalid score. Please enter a score between 0 and 100." << endl;
            i--; // Decrement i to repeat the input for the same student
        }
    }
    int total = 0;
    int average = 0;
    int greaterThan50 = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Score for student " << (i + 1) << ": " << *(scores + i) << endl;
        total += *(scores + i);
        if (*(scores + i) > 50)
        {
            greaterThan50++;
        }
    }
    average = total / n;
    cout << "Total score: " << total << endl;
    cout << "Average score: " << average << endl;
    cout << "Number of students with score greater than 50: " << greaterThan50 << endl;
    delete[] scores;
    scores = nullptr;
    return 0;
}