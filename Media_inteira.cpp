#include <iostream>




int main()
{  
    
    int A, B, media;

    // entrada de dados

    std:: cout<<"Digite um número inteiro: "<< std:: endl;
    std:: cin>> A;

    while (!(A<1000)){
        std:: cout<<"O número deve ser menor do que 1000! Digite um número inteiro: "<< std:: endl;
        std:: cin>> A;
    }

    std:: cout<<"Digite um segundo número inteiro: "<< std:: endl;
    std:: cin>> B;

    while (!(B<1000)){
        std:: cout<<"O número deve ser menor do que 1000! Digite um segundo número inteiro: "<< std:: endl;
        std:: cin>> B;
    }

    //cálculo da média
    
    media = (A+B)/2;
    
    std:: cout<< "A média dos números é: "<< media << std:: endl;
    
   

}