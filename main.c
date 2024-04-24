#include <stdio.h>

int main() {
    int numero, digito1, digito2, digito3, numeroInvertido;

    // Recebe a entrada do usuário
    printf("Digite um número de três dígitos: ");
    scanf("%d", &numero);

    // Separa o número em seus dígitos componentes
    digito1 = numero / 100;
    digito2 = (numero / 10) % 10;
    digito3 = numero % 10;

    // Reconstrói o número na ordem inversa
    numeroInvertido = digito3 * 100 + digito2 * 10 + digito1;

    // Imprime o número invertido
    printf("O número invertido é: %d\n", numeroInvertido);

    return 0;
}
