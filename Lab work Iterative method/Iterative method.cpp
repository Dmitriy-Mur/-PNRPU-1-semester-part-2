#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double equation(double x);

int main() {
    while (true) {
        setlocale(LC_ALL, "Rus");
        bool solutionIsFound = true;
        int iterСount = 0;
        double lowerBound, upperBound, lastSolution, newSolution;
        double eps = 0;
        cout << "Для решения уравнения y = x - 2 + sin(1/x) = 0, с корнем x = 1,3077, \
методом итераций,\nведите пераметры интервала A и B (рекомендуем 1 и 2!): ";
        cin >> lowerBound >> upperBound;
        while ((eps == 0) or (eps >= abs(lowerBound - upperBound))) {
            cout << "Введите значение эпсилон(0 < eps < " << abs(lowerBound - upperBound) << "): ";
            cin >> eps;
        }
        if (equation(lowerBound) > 0) {
            newSolution = lowerBound;
        }
        else if (equation(upperBound) > 0) {
            newSolution = upperBound;
        }
        else {
            solutionIsFound = false;
        }
        if (solutionIsFound) {
            do {
                lastSolution = newSolution;
                newSolution = equation(lastSolution);
                iterСount++;
            } while (abs(newSolution - lastSolution) > eps and solutionIsFound);
        }
        if (solutionIsFound) {
            cout << "Корень фунции равен: " << setprecision(13) << newSolution << "\
        \nОтвет найден за " << iterСount << " итерации";
        }
        else {
            cout << "Нет решений на заданном промежутке" << '\n';
        }
    }
    return 0;
}

double equation(double x) {
    return 2 - sin(1 / x);
}







