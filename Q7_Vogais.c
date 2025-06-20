#include <stdio.h>//declaração das bibliotecas
#include <string.h>  
#include <ctype.h>
int contaVogais(char str[]) {// função para contar as vogais
    int contador = 0;
    for(int i = 0; i < strlen(str); i++) {
        char c = tolower(str[i]);  
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;//adiciona as vogais e um contador
        }
    }
    return contador;
}

int main() {
    char frase[200];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int totalVogais = contaVogais(frase);// chama a função

    printf("A frase contém %d vogais.\n", totalVogais);

    return 0;
}
