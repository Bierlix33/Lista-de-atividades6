#include <stdio.h> //declaração de biblioteca
int maiorValor(int a, int b, int c);//declaração da função
int main(){
    int num1, num2, num3;// declarações das variaveis
    printf("digite 3 numeros inteiros\n", num1, num2, num3);
    scanf("%d %d %d", &num1, &num2, &num3);
    int maior= maiorValor(num1, num2, num3); //atributo a função maiorValor
    printf("maior valor eh: %d\n", maior);
    return 0;
}
int maiorValor(int a, int b, int c) {//condição para encontrar o numero maior que o usuario colocar
    int maior= a;
 if (b > maior){
     maior= b;
 }
 if(c>maior){
     maior= c;
 }
 return maior;
}
