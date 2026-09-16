#include <iostream>
using namespace std;
int main() {
    int numbers[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < count; j++)
        {
            if (numbers[i] == numbers[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            numbers[count] = numbers[i];
            count++;
        }
    }

    cout << "Unique values: ";
    for (int i = 0; i < count; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "Count of unique values: " << count << endl;

    return 0;
}