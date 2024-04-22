#include <iostream>
using namespace std;

int fibonacci(int n);

int main() {
    int number;
    cout << "Enter the number of numbers: ";
    cin >> number;
    for (int i = 0; i < number; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}