#include <stdio.h>

int main() {
    char caractere_original;
    char caractere_cifrado;
    int chave;

    printf("Digite uma unica letra secreta: ");
    scanf(" %c", &caractere_original);

    printf("Digite uma chave numerica (ex: 3): ");
    scanf("%d", &chave);

    caractere_cifrado = caractere_original + chave;

    printf("Caractere original: %c\n", caractere_original);
    printf("Caractere criptografado: %c\n", caractere_cifrado);

    return 0;
}