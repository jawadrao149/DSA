#include <iostream>
using namespace std;
int main() {
   int sales[5];
   int* p = sales;
   for (int i = 0; i < 5; i++) {
      cout << "Enter sales for day " << (i + 1) << ": ";
      cin >> *(p + i);
   }
   int total = 0;
   for (int i = 0; i < 5; i++)
   {
        cout << "Sales for day " << (i + 1) << ": " << *(p + i) << endl;
        total += *(p + i);
   }
   cout << "Total sales: " << total << endl;

   *(p+2) = *(p+2) + 2;
   cout << "Updated sales for day 3: " << *(p + 2) << endl;
   total = 0;
   for (int i = 0; i < 5; i++)
   {
        cout << "Sales for day " << (i + 1) << ": " << *(p + i) << endl;
        total += *(p + i);
   }
   cout << "Total sales: " << total << endl;
   return 0;
}