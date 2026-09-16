#include <iostream>
using namespace std;
int main() {
    int numbers[5];
    int total = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++) {
        total += numbers[i];
        // cout << "the value of i " << i << endl;
        // cout << "the value of total " << total << endl;
    }

    cout << "Total: " << total << endl;


}