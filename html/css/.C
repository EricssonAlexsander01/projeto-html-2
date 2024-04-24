#include <stdio.h>

int main() {
    int i;

    printf("Digite um numero de sua preferencia: \n");
    scanf("%d", &i);

    for (int x = 0; x <= i; x++) {
        printf("%d\n", x);  // Imprime o número 'x' seguido de uma quebra de linha
    }

    return 0;
}
