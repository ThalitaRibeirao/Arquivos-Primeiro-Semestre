#include <stdio.h>
#include <stdbool.h>

/* Verifica se um número é perfeito */ 

int perfeito (int num) {
    int i, count;
    for (i = 1; i < num; i++) {
        if ((num % i) == 0) {
            count += i;
        }
    }
    if (num == count) {
        return true;
    }
    else {
        return false;
    }
}

int main () {
    int numero;
    printf ("Digite um nomero: ");
    scanf ("%d", &numero);
    if (perfeito (numero)) {
        printf ("Eh perfeito!");
    }    
    else {
        printf ("Nao eh perfeito :(");
    }
    return 0;
}