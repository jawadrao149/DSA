#include <iostream>
using namespace std;
int main() {
    int size = 6;
    int numbers[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
//lets reverse this array.

    for (int i = 0; i < size / 2; i++)
    {
        int temp = numbers[i];
        numbers[i] = numbers[size - 1 - i];
        numbers[size - 1 - i] = temp;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}