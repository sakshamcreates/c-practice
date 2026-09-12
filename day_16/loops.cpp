#include <iostream>
#include <vector>

int main() {
    // 1. Standard FOR Loop
    // Best when you know the exact number of iterations in advance.
    std::cout << "--- Standard For Loop ---" << std::endl;
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Iteration: " << i << std::endl;
    }

    // 2. Range-based FOR Loop (C++11 and later)
    // Best for iterating over collections like arrays, vectors, or strings.
    std::cout << "\n--- Range-based For Loop ---" << std::endl;
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    for (int num : numbers) {
        std::cout << "Value: " << num << std::endl;
    }

    // 3. WHILE Loop
    // Best when you want to loop until a specific condition becomes false.
    std::cout << "\n--- While Loop ---" << std::endl;
    int count = 1;
    while (count <= 3) {
        std::cout << "Count: " << count << std::endl;
        ++count;
    }

    // 4. DO-WHILE Loop
    // Guarantees the body executes AT LEAST ONCE before checking the condition.
    std::cout << "\n--- Do-While Loop ---" << std::endl;
    int step = 1;
    do {
        std::cout << "Step: " << step << std::endl;
        ++step;
    } while (step <= 3);

    return 0;
}