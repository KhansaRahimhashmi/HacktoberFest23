#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Read an integer from the user
    int n;
    cin >> n;

    // Create a vector to store the input
    vector<int> numbers;

    // Read 'n' integers from the user and store them in the vector
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    // Sort the vector in ascending order
    sort(numbers.begin(), numbers.end());

    // Print the sorted numbers
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }

    // Print a newline character to separate the output
    cout << endl;

    return 0;
}
