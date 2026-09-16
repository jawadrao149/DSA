#include <iostream>
using namespace std;
int main() {
    int sales[2][3];
    int (*rowPtr)[3] = sales;
    
for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter sales for day " << (i + 1) << ", product " << (j + 1) << ": ";
            cin >> *(*(rowPtr + i) + j);
        }
    }
    int total_each_day = 0;
    int total_each_branch = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Sales for day " << (i + 1) << ", product "<< (j + 1) << ": " << *(*(rowPtr + i) + j) << endl;
            total_each_day += *(*(rowPtr + i) + j);
            total_each_branch += *(*(rowPtr + i) + j);
        }
        cout << "Total sales for day " << (i + 1) << ": " << total_each_day << endl;
        total_each_day = 0;
    }
    cout << "Total sales: " << total_each_branch << endl;
    return 0;
}