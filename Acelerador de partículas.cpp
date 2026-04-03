#include<iostream>

int main()
{
    int D, resto, sensor;
    

    std::cout<<"Digite a distância total em km percorrida pela partícula: "<< std::endl;
    std::cin>> D;
    while  (!(D >= 6)){ // tratamento erro

    std ::cout<<"Valor inválido. A distância total deve ser maior ou igual a 6 km."<< std::endl;

    std::cout<<"Digite a distância total em km percorrida pela partícula: "<< std::endl;
    std::cin>> D;

    }
    resto= (D-3) % 8;

if (resto == 5) {

    sensor = 3;
}
else if (resto == 4) {

    sensor = 2;
}
else if (resto == 3)
{

    sensor = 1;
}

    std::cout<<"O sensor que detectará a partícula é o sensor número: "<< sensor << std::endl;
}

