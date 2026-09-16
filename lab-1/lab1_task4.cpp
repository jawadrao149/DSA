#include <iostream>
using namespace std;
int main() {
    int numbers[8];

    for (int i = 0; i < 8; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    
    int large = numbers[0];
    int index = 0;
    int small = numbers[0];

    for (int i = 0; i < 8; i++)
    {
        if (numbers[i] > large)
        {
            large = numbers[i];
            index = i;
        }
    }
    cout << "The largest number is: " << large << endl;
    cout << "Index of the largest number is: " << index << endl;

    for (int i = 0; i < 8; i++)
    {
        
        if (numbers[i] < small)
        {
            small = numbers[i];
            index = i;
        }
    }
    cout << "The smallest number is: " << small << endl;
    cout << "Index of the smallest number is: " << index << endl;

    return 0;
}