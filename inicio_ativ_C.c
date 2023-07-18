#include <stdio.h>
#include <math.h>

int main() {
   char nome[50], sexo[10];
   int idade;
   
   printf("Qual o seu nome? ");
   scanf("%s", nome);
   printf("Qual seu sexo? ");
   scanf("%s", sexo);
   printf("Qual a sua idade? ");
   scanf("%d", &idade);
   
   if(idade < 25 && sexo[0] == 'f' || sexo[0] == 'F' || sexo[0] == 'feminino' || sexo[0] == 'Feminino') {
     printf("parabens %s voce foi aceito(a)\n", nome);  
   }
   else {
       printf("Infelizmente voce nao foi aceito(a) %s\n", nome);
   }
   
   return 0;
}