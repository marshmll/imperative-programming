#include <stdio.h>
#include <string.h>

int main(void)
{
    char nome[] = "Rivelino";

    int resultado = strcmp(nome, "Garrincha");

    printf("%d\n", resultado);

    return 0;
}