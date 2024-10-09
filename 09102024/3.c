#include <stdio.h>
#include <string.h>

#define MAX 100

int main(void)
{
    char dna[MAX];

    printf("Digite uma string: ");
    fgets(dna, MAX, stdin);

    char *pos = strstr(dna, "ACGT");
    int amount = 0;



    printf("Subsequências encontradas: %d\n", amount);

    return 0;
}