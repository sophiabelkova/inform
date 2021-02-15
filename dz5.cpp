#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0;
    while (a>-1){
       a=a++;
    }
     while (b<1){
       b=b--;
     }
     cout<<"Максимальное значение"<<a-1<<endl;
     cout<<"Минимальное значение"<<b+1<<endl;
     return 0;
}
