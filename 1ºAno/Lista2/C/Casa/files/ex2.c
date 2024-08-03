#include <stdio.h>

int main() {
    
    int n;
    printf ("Bem-vindo à brincadeira, nobríssimo usuário.\nA brincadeira consiste em você entrar com um número entre 0 e 100; desta maneira, eu, sendo um mestre da aritmética, irei te dizer o quão distante tal número está do nosso número chave :)\nNúmero chave = 22\n");
    printf ("Número digitado = ");
    scanf ("%d", &n);
    if (n < 22) {
        printf ("Resposta = %d :)\n", 22 - n);    
    }
    else {
        printf ("Resposta = %d :)\n", n - 22);
    }
    
    return 0;
}