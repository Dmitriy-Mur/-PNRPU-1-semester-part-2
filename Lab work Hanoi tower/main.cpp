#include <iostream>
using namespace std;
int step = 1;

void hanoi(int n, int start, int temp, int point);

int main() {
    setlocale(LC_ALL, "Rus");
    cout << "Введите колличество колец: ";
    int amount;
    cin >> amount;
    hanoi(amount, 1, 3, 2);
    cout << "Задача решена!\n";
    cout << "Для решения потребовалось: " << step <<" шагов";
    return 0;
}

void hanoi(int n, int start, int temp, int point) {
    if (n > 0) {
        //start - стержень с которого нужно переместить
        //temp - стержень на который нужно переместь
        //point - вспомогательный стержень
        hanoi(n - 1, start, point, temp);
        cout << "Шаг " << step << " :\n";
        cout << "Перекладываем " << n << " бублик\n";
        cout << "С стержня " << start << " на стержень " << temp << '\n';
        step++;
        hanoi(n - 1, point, temp, start);
    }
}