/* Nome: Thalita Alves da Silva   N USP: 12567349 */

void funcao ();

int main () {
    int vetor[1000], *p, i;
    p = vetor;

    funcao (p);
    return 0;
}

void funcao (int *p) {

    int i, troca [1000], soma = 0;

    for (i = 0; i < 1000; i++) {

        if ((i%2) == 0) {
            troca[i+1] = *(p+i);
        }

        else {
            troca [i] = *(p+i);
        }
    }

    printf ("\n O vetor trocado equivale a: \n ");

    for (i = 0; i < 1000; i++) {
        printf (" %d ", troca[i]);
    }

    for (i = 0; i <5; i++) {
        soma += *(p+i);
    }

    printf ("\n ------------------------- \n");
    printf ("\n A soma dos elementos do vetor equivale a %d", soma);
}
