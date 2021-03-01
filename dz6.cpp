#include <iostream>

int main() {
    // Решение тут
    int(N);
    int(M);
    int(S);
    int(mul){1};
    std::cout<<"Введите число"<<std::endl;
    std::cin>>N;
    std::cout<<"Введите основание системы счисления"<<std::endl;
    std::cin>>M;
    int size = sizeof(N)*8;

    for(int i=0; i<size; ++i)
    {
        int ost=N%M;
        N=N/M;
        S=S+ost*mul;
        mul=mul*10;
    }
    std::cout <<S<<std::endl;
    return 0;
