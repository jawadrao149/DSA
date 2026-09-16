#include <iostream>
using namespace std;

int main() {
    int numbers[] = {2,4,6,8,10};
    numbers[2] = 7;
// I know the output would be 2 4 7 8 10 because I have changed the value of the index 2 from 6 to 7.
    for (int i = 0; i<5; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}