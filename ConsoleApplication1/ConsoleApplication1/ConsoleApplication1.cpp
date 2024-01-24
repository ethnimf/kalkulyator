#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;


int Num1;
int Num2;
int Count;
int n;

void SelectedCase(int id);
int64_t Factarial(int i);


int main() {
    setlocale(LC_ALL, "Russian");


    cout << "1 - Сложить 2 числа" << endl;
    cout << "2 - Вычесть превое из второго" << endl;
    cout << "3 - Перемножить два числа" << endl;
    cout << "4 - Раздел��ть первое число на второе" << endl;
    cout << "5 - Возвести в степень n первое число" << endl;
    cout << "6 - Найти квадратный корень из числа" << endl;
    cout << "7 - Найти 1 процент от числа" << endl;
    cout << "8 - Найти факториал от числа" << endl;
    cout << "9 - EXIT" << endl;
    cout << "Выберете действие" << endl;
    int id;
    cin >> id;
    SelectedCase(id);
    return 0;
}

void SelectedCase(int id) {
    switch (id) {
    case 1: {
        int aads, baf, cdhgd;
        cout << "Введите первое число для сложения:" << endl;
        cin >> aads;
        cout << "Введите ��торое число для сложения:" << endl;
        cin >> baf;
        cdhgd = aads + baf;
        cout << "Сумма данных чисел: " << cdhgd << endl;
        cout << "Введите выбранное действие" << endl;
        int newId;
        cin >> newId;
        SelectedCase(newId);
        break;
    }
    case 2: {
        cout << "Введите первое число для вычитан��я:" << endl;
        cin >> Num1;
        cout << "��ведите второе число для вы��итания:" << endl;
        cin >> Num2;
        Count = Num1 - Num2;
        cout << "Ответ:" << endl;
        cout << Count << endl;
        cout << "Введите выбранное действие" << endl;
        int newId;
        cin >> newId;
        SelectedCase(newId);
        break;
    }
    case 3: {
        cout << "Введите первое число для умн��жения:" << endl;
        cin >> Num1;
        cout << "Введите второе число для умножения:" << endl;
        cin >> Num2;
        Count = Num1 * Num2;
        cout << "Ответ:" << endl;
        cout << Count << endl;
        cout << "Введите выбранное действие" << endl;
        int newId;
        cin >> newId;
        SelectedCase(newId);
        break;
    }
    case 4: {
        cout << "Введите первое число для деления:" << endl;
        cin >> Num1;
        cout << "Введите второе число для деления:" << endl;
        cin >> Num2;
        Count = Num1 / Num2;
        cout << "Ответ:" << endl;
        cout << Count << endl;
        cout << "Введите выбранное действие" << endl;
        int newId;
        cin >> newId;
        SelectedCase(newId);
        break;
    }
    case 5: {
        double a, b, c;
        cout << "Введите первое число для возведения в степень:" << endl;
        cin >> a;
        cout << "Введите ��торое число для степени:" << endl;
        cin >> b;
        c = pow(a, b);
        cout << "Ответ:" << endl;
        cout << c << endl;
        cout << "Введите ��ыбранное действие" << endl;
        int newId;
        cin >> newId;
        SelectedCase(newId);
        break;
    }
    case 6: {
        double aa, bb;
        cout << "Введите первое число для нахождения корня:" << endl;
        cin >> aa;
        bb = sqrt(aa);
        cout << "Ответа:" << endl;
        cout << bb << endl;
        cout << "Введите ��ыбранное действие" << endl;
        int newId;
        cin >> newId;
        SelectedCase(newId);
        break;
    }
    case 7: {
        cout << "Введите ��ервое число для нахождения ��роцента :" << endl;
        cin >> Num1;
        Count = Num1 / 100;
        cout << "Ответ:" << endl;
        cout << Count << endl;
        cout << "Введите выбранное действие" << endl;
        int newId;
        cin >> newId;
        SelectedCase(newId);
        break;
    }
    case 8: {
        cout << "Введите первое число для нахождения факториала :" << endl;
        cin >> Num1;
        cout << "Отвте: " << endl;
        Factarial(Num1);
        cout << "Введите ��ыбранное действие" << endl;
        int newId;
        cin >> newId;
        SelectedCase(newId);
        break;
    }
    case 9: {
        exit(0);
        break;
    }
    default: {
        cout << "ERROR" << endl;
        break;
    }
    }
}

int64_t Factarial(int i) {
    int64_t FactarialA = i;
    for (int n = 1; n < i; n++) {
        FactarialA *= n;
    }
    cout << "Ответ ф��кториал " << FactarialA << endl;
    return FactarialA;
}


