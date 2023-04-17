#include <stdio.h>

int main() {
    int num, fib1 = 0, fib2 = 1, next_fib;
    int found = 0;

    // Lê um número informado pelo usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Calcula a sequência de Fibonacci até o número informado
    while (fib1 <= num) {
        if (fib1 == num) {
            found = 1;
            break;
        }
        next_fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = next_fib;
    }

    // Exibe a mensagem indicando se o número pertece a sequência ou não
    if (found) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}