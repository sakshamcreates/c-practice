#include <iostream>
#include <iomanip>

int main() {
    int rows = 5;
    int cols = 5;

    std::cout << "--- 5x5 Multiplication Table ---\n\n";

    for (int i = 1; i <= rows; ++i) {           // Row loop
        for (int j = 1; j <= cols; ++j) {       // Column loop
            std::cout << std::setw(4) << i * j; // Output product formatted to 4 spaces
        }
        std::cout << std::endl;                 // Move to next line after completing a row
    }

    return 0;
}