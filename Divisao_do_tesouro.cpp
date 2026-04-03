#include<iostream>

int main()
{
    int A, N, divisao, parte_capitao;
    std::cout<<"Quantas moedas a tripulção achou? "<< std::endl;
    std::cin>>A;

    while (!(3 <= A && A <= 10000))
    {
        std::cout<<"O número de moedas deve ser entre 3 e 10000! Digite novamente! "<< std::endl;
        std::cout<<"Quantas moedas a tripulção achou? "<< std::endl;
        std::cin>>A;
    }

    std::cout<<"Quantos membros tem a tripulção? "<< std::endl;
    std::cin>>N;

    while (!(1<= N && N<=1000))
    {
        std::cout<<"O número de membros deve ser entre 1 e 1000! Digite novamente! "<< std::endl;
        std::cout<<"Quantos membros tem a tripulção? "<< std::endl;
        std::cin>>N;
    }

    // cálculo da divisão das moedas:

    divisao = A / (N + 2);
    parte_capitao = divisao * 2;

    std::cout<<"O capitão receberá "<< parte_capitao <<" moedas."<< std::endl;



}
    

