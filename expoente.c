#include <stdio.h>
int potencia(int base, int expoente){
    int resultado = 1;
    for(int i = 0; i < expoente; i++){
        resultado *= base;
}
return resultado;
}
int main(){
    int base, expoente;
    printf("digite a base e o expoente\n");
    scanf("%d %d", &base, &expoente);
    int resultado= potencia(base, expoente);
    printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);
    return 0;
}
