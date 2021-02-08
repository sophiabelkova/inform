// Найдтие сумму чисел от 1 до N.
// N вводится с клавиатуры. Вывести сумму.
#include <iostream>
using namespace std;
int main()
{
    int n, s = 0;
    int i;
    cout<<"Введите число n=";
    cin >> n;
    while (i<n)
    {
        i++;
        s+=i;
    }
    cout << s;
    return 0;
}
