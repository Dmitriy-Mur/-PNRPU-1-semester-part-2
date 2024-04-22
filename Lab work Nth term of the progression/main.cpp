#include <iostream>
using namespace std;

int directFactorial(int x);
double directCalculation(int x);
int recursiveFactorial(int x);
double recursiveCalculation(int x, int n);

int main() {
    setlocale(LC_ALL, "Rus");
    int x = 15;
    int n = 8;
    for (int i = 0; i <= x; i++) {
        cout << "При x = " << i << ":" << '\n';
        cout << "Прямое: S = " << directCalculation(i) << '\n';
        cout << "Рекурсия: S = " << recursiveCalculation(i, n) << '\n';
    }
    return 0;
}   

int directFactorial(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++) {
        result = result * i;
    }
    return result * (x != 0);
}

double directCalculation(int x) {
    double s = 0;
    int accuracy = 9;
    for (int i = 0; i < accuracy; i++) {
        s = s + pow(x, 2 * i + 1) / directFactorial(2 * i + 1);
    }
    return s;
}

int recursiveFactorial(int x) {
    if (x <= 1) {
        return 1 * x;
    }
    else {
        return x * recursiveFactorial(x - 1);
    }
}

double recursiveCalculation(int x, int n){
    if (n == 0) {
        return x;
    }
    return pow(x, 2 * n + 1) / recursiveFactorial(2 * n + 1) + recursiveCalculation(x, n - 1);
}



















