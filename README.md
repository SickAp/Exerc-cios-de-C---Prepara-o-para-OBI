# Exerc-cios-de-C---Prepara-o-para-OBI
Resolução de exercícios lógicos da OBI utilizando C++
# EXERCÍCIOS BÁSICOS 
  Média inteira 
  
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

  Divisao_do_tesouro
    
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
  Media_Mediana
  
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



  Acelerador de partículas
  
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
                
