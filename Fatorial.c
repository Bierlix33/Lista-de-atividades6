#include <stdio.h>//declaração de biblioteca
int fatorial (int n){ //função fatorial criada
    int resultado = 1;
    for(int i = 1; i <= n; i++){// estrutura de repetição para achar o resultado o fatorial
        resultado *= i;
}
return resultado;
}
int main(){
    int numero;
    printf("digite um numero inteiro que não seja negativo\n");
    scanf("%d", &numero);
        int resultado = fatorial(numero);// chama a função
        printf("o fatorial de %d é %d\n", numero, resultado);
return 0;
}
