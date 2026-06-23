# Lógica de Programação Aplicada à Segurança da Informação 🛡️

Este repositório contém dois projetos práticos desenvolvidos em linguagem C, utilizando conceitos fundamentais de lógica de programação (estruturas condicionais e de repetição) aplicados à segurança cibernética.

---

## 🚀 Projetos Desenvolvidos

### 1. Simulador de Autenticação com Controle de Tentativas (`login.c`)
Um programa que simula o sistema de login de um painel de segurança (SOC). Ele valida as credenciais e limita o acesso a no máximo 3 tentativas. 

* **Conceito de Infosec:** Mitigação de ataques de **Força Bruta (Brute Force)** e controle de acessos em aplicações.
* **Estruturas utilizadas:** Loops `while`, desvios condicionais `if/else` e interrupção de laço com `break`.

### 2. Cifrador por Deslocamento - Cifra de César (`cripto.c`)
Uma implementação de uma das técnicas de criptografia mais antigas da história. O programa recebe uma letra e desloca o seu valor com base em uma chave numérica escolhida pelo usuário.

* **Conceito de Infosec:** Introdução à **Criptografia Simétrica** e confidencialidade dos dados através da manipulação da tabela ASCII.
* **Estruturas utilizadas:** Variáveis primitivas (`char`, `int`) e operadores aritméticos de soma.

---

## 🛠️ Como Compilar e Executar

Certifique-se de ter o compilador `gcc` configurado no seu ambiente.

### Compilando os programas:
```bash
gcc login.c -o programa_login
gcc cripto.c -o programa_cripto
