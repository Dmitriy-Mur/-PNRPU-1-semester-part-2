#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double equation(double solution);

int main() {
    setlocale(LC_ALL, "Rus");
    while (true) {
        int iterCount = 0;
        double lowerBound, upperBound, solution;
        double eps = 0;
        cout << "Для решения уравнения y = solution - 2 + sin(1/solution) = 0, с корнем solution = 1,3077,\
    \nметодом половинного деления, введите пераметры интервала A и B (рекомендуем 1 и 2!): ";
        cin >> lowerBound >> upperBound;
        while ((eps == 0) or (eps >= abs(lowerBound - upperBound))) {
            cout << "Введите значение эпсилон(0 < eps < " << abs(lowerBound - upperBound) << "): ";
            cin >> eps;
        }
        bool solutionIsFound = true;
        while ((abs(lowerBound - upperBound) > eps) and solutionIsFound) {
            solution = (lowerBound + upperBound) / 2;
            if (equation(solution) * equation(lowerBound) < 0) {
                upperBound = solution;
            }
            else if (equation(solution) * equation(upperBound) < 0) {
                lowerBound = solution;
            }
            else {
                solutionIsFound = false;
            }
            iterCount++;
        }
        if (solutionIsFound) {
            cout << "Корень фунции равен: " << setprecision(13) << solution << '\n';
            cout <<  "Ответ найден за " << iterCount << " итерации";
        }
        else {
            cout << "Нет решений на заданном промежутке" << '\n';
        }
    }
}

double equation(double solution) {
    return solution - 2 + sin(1 / solution);
}




