#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 10

int main(void)
{
    char frase[MAX];
    printf("Digite uma frase: ");
    bool enter_not_found = true;

    do
    {
        fgets(frase, MAX, stdin);

        size_t tam = strlen(frase);
        printf("tam = %ld\n", tam);
        int pos = strcspn(frase, "\r\n");
        printf("pos = %d\n", pos);

        if (pos < tam)
            enter_not_found = false;

        char ultimo = frase[tam - 1];
        printf("ultimo: %c (%d)\n", ultimo, ultimo);

        frase[pos] = '\0';
        printf("%s\n\n", frase);
    }
    while (enter_not_found);

    return 0;
}