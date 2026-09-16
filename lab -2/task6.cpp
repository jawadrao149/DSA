#include <iostream>

int main() {
    int n = 3;
    // Allocate array
    int* values = new int[n];

    std::cout << "Enter " << n << " integers (e.g., 4 5 6): ";
    
    // CORRECTION 1: Loop strictly less than n (i < n) to stay in bounds
    for (int i = 0; i < n; i++) {
        std::cin >> values[i];
    }

    std::cout << "You entered: ";
    // Output all three integers as requested
    for (int i = 0; i < n; i++) {
        std::cout << values[i] << " ";
    }
    std::cout << "\n";

    // CORRECTION 2: Use the array delete[] operator
    delete[] values;

    // CORRECTION 3: Reset the pointer to avoid a dangling pointer
    values = nullptr;

    // Safe to check if it's null before using it again (optional but good practice)
    if (values == nullptr) {
         std::cout << "Memory successfully cleared and pointer reset.\n";
    }

    return 0;
}
