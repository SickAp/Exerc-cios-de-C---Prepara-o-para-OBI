#include<iostream>


int main()
{
    int A, B, C;
    std::cout<<"Digite um número inteiro para o valor A: "<< std::endl;
    std:: cin>>A;
    while (!(1<= A))
    {
        std:: cout<<"O número deve ser maior ou igual a 1! Digite um número inteiro para o valor A: "<< std:: endl;
        std:: cin>> A;
    }

    std::cout<<"Digite um número inteiro para o valor B: "<< std::endl;
    std:: cin>>B;

    while (B < A)
    {
        std::cout<<"O valor de A deve ser menor do que o valor de B! Digite novamente! "<< std::endl;
        std::cout<<"Digite um número inteiro para o valor B: "<< std::endl;
        std::cin>> B;
    }

    //A = (C + B)/ 2; 

        C = 2*A - B;
        
        // COMO C É O MENOR VALOR POSSÍVEL ENTÃO ELE NÃO FICARÁ NO MEIO E "A", SENDO MENOR QUE B, SERÁ O VALOR CENTRAL E, PORTANTO, A MEDIANA ENTRE OS TRÊS VALORES. --> O VALOR DE C SERÁ DEFINIDO COM BASE NO VALOR DE "A" POIS A MÉDIA ENTRE "C" E "B" DEVE RESULTAR EM "A".
    
    std::cout<<"O menor valor de C é: "<< C << std::endl;
}
