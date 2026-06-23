#include <stdio.h>

int main() {
    int senha_correta = 2026;
    int senha_digitada;
    int tentativas = 0;
    int logado = 0;

    while (tentativas < 3) {
        printf("Digite a senha numerica de acesso: ");
        scanf("%d", &senha_digitada);

        if (senha_digitada == senha_correta) {
            logado = 1;
            break;
        } else {
            tentativas++;
            printf("Senha incorreta! Tentativas restantes: %d\n\n", 3 - tentativas);
        }
    }

    if (logado == 1) {
        printf("ACESSO PERMITIDO: Bem-vindo ao painel do SOC.\n");
    } else {
        printf("SISTEMA BLOQUEADO: Numero maximo de tentativas excedido!\n");
    }

    return 0;
}