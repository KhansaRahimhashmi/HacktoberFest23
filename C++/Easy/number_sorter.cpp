#include <iostream>
#include <vector>
#include <algorithm>

//Author Khansa Rahim
//https://www.hackerrank.com/challenges/cpp-input-and-output/problem?isFullScreen=true

int main() {
    // Read an integer from the user
    int n;
    std::cin >> n;

    // Create a vector to store the input
    std::vector<int> numbers;

    // Read 'n' integers from the user and store them in the vector
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    // Sort the vector in ascending order
    std::sort(numbers.begin(), numbers.end());

    // Print the sorted numbers
    for (int i = 0; i < n; i++) {
        std::cout << numbers[i] << " ";
    }

    // Print a newline character to separate the output
    std::cout << std::endl;

    return 0;
}
