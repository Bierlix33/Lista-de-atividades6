#include <stdio.h> //declaração de biblioteca
int Ehprimo(int numero); //função criada
int main() {
    int valor; //declaração de variavel
    printf("digite um numero inteiro\n");
    scanf("%d", &valor);
    
    if(Ehprimo(valor)) { //if else para ser utilizado junto com a estrutura de repetição for
        printf("eh primo");
}else{
    printf("nao eh primo");
}
return 0;
}
int Ehprimo(int numero) {
    if(numero <=1) { // estruturas de repetição para verificar se o numero é primo ou não
    return 0;
}
    for(int i =2;i < numero; i++) {
        if(numero % i == 0){
            return 0;
    }

}
return 1;
}
