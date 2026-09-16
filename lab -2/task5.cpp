#include <iostream>

int main() {
    int n;
    
    // Read n (1-10)
    std::cout << "Enter the number of initial students (1-10): ";
    std::cin >> n;

    if (n < 1 || n > 10) {
        std::cout << "Invalid input. n must be between 1 and 10.\n";
        return 1;
    }

    // Allocate n marks
    int* marks = new int[n];
    
    std::cout << "Enter " << n << " marks: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> *(marks + i);
    }

    // --- STEP 1: Allocate, Copy, and Append ---
    // Allocate a second block of n + 1 integers
    int* new_marks = new int[n + 1];

    // Copy the original n values into it using pointer notation
    for (int i = 0; i < n; ++i) {
        *(new_marks + i) = *(marks + i);
    }

    // Read the new mark into the final position
    std::cout << "Enter the new student's mark: ";
    std::cin >> *(new_marks + n);

    // --- STEP 2: Release, Redirect, Update, and Display ---
    // Release the old block
    delete[] marks;

    // Make the original pointer refer to the new block and update size
    marks = new_marks;
    n = n + 1;

    // Display all values
    std::cout << "Updated marks array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << *(marks + i) << " ";
    }
    std::cout << "\n";

    // --- STEP 3: Final Cleanup ---
    // Release the final block exactly once
    delete[] marks;
    
    // Good practice: set pointer to nullptr after deletion
    marks = nullptr; 
    new_marks = nullptr;

    return 0;
}
