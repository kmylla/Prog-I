/*
Trab 2 : Numeros Primos
* Nome e Matricula: Camylla de Souza Reis 0050014036
* Professor: Alex Salgado 
*/

// Ola, meu nome eh Camylla de Souza Reis e vou calcular numeros primos

#include <stdio.h>

int main() 

{

  int num;
  int i;
  int cont;

      
  do
  {
    printf("\nDigite um numero positivo:");
    scanf("%d", &num);
  
  i = 2;

  cont = 0;

    while (i < num) 
    {
      if (num % i == 0) 
    {
        cont++;

     }

      i++;

     }
 }
 
    while(num<=0);
 
    if (cont > 0) 
    
    {
      printf("\nO numero digitado nao e primo.");

    }

    else 
    
    {
      printf("\nO numero digitado e primo.");

     }
                  
  printf("\n\n\Deseja continuar?(1-SIM/2-NAO)");
  scanf("%d", &num);
  
  while(num==1)
  {
    do
  {
    printf("\nDigite um numero positivo:");
    scanf("%d", &num);
  
  i = 2;

  cont = 0;

    while (i < num) 
    {
      if (num % i == 0) 
    {
        cont++;

     }

      i++;

     }
 }
 
    while(num<=0);
 
    if (cont > 0) 
    
    {
      printf("\nO numero digitado nao e primo.");

    }

    else 
    
    {
      printf("\nO numero digitado e primo.");

     }
                  
     printf("\n\nDeseja continuar?(1-SIM/2-NAO)");
     scanf("%d", &num);
}
 

 if (num==2)
    {
       printf("\nObrigado, ate a proxima! Para ver o meu codigo entre no link:"); 
       scanf("%d", &num);                         
    }
    
    printf("\n\n");
    
    system("pause");

}
