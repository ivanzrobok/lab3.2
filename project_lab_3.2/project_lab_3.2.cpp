// project_lab_3.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// project_lab2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
    // Lab_02.1cpp
// < Зробок Іван>
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція з параметрами
// Варіант 0.9

#include <iostream>;
#include <Windows.h>;
using namespace std;

int main()
{
    SetConsoleCP(1251);

    SetConsoleOutputCP(1251);

    double F;
    double x;
    double a;
    double b;
    double c;
    cout << "введіть а "; cin >> a;
    cout << "введіть b "; cin >> b;
    cout << "введіть c "; cin >> c;
    cout << "введіть x "; cin >> x;
    //перший спосіб
    if (a < 0 && a != x)
        F = (a * x * x) + (b * x * x);
    if (a > 0 && x == 0)
        F = x - (a / (x - c));
    else
        F = 1 + (x / c);
    cout << endl;
    cout << "F=" << F << endl;
    return 0;
    //другий спосіб:розгалуження в повні формі
    if(a < 0 && a != x)
        F = (a * x * x) + (b * x * x);
    else
        if (a > 0 && x == 0)
            F = x - (a / (x - c));
        else
            F = 1 + (x / c);
    cout << "F=" << F << endl;
    cin.get();
    return 0;
}

