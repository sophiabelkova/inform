// Найдтие сумму чисел от 1 до N.
// N вводится с клавиатуры. Вывести сумму.
#include <iostream>
using namespace std;
int main()
{
    int n, s = 0;
    cout<<"Введите число n=";
    cin >> n;
    s = (1+n) * n / 2; //арифметическая прогрессия
    cout << s;
    return 0;
}
