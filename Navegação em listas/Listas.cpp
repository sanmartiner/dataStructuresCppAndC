
#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//ALOCA VETOR
int* alocaVetor(int tam){

    //CRIA UM PONTEIRO AUXILIAR
    int *v;

    //ALOCA MEMORIA PARA O NOVO VETOR
    v = (int *)malloc(tam * sizeof(int));

    return v;
}

void imprimeSequencial(int *vetor, int tamanhoDaListaSequencial){
    int i;
    for(i = 0; i < tamanhoDaListaSequencial; i++){
        printf("\nVetor %d: %d", i, vetor[i]);

    }
}
int main(){

    int vetor[TAM] = {1, 2, 3}, i, tamanhoDaLista;

    //LENDO OS VALORES
    for(i = 0; i < TAM; i++){
        printf("\nPlease set new array value on position %d: ", i);
        scanf("%d: ", &vetor[i]);

    }

    imprimeSequencial(vetor, 3);

    //PEDINDO OS VALORES DO VETOR
    printf("\nDigite o tamanho do vetor: ");
    scanf("\n%d", &tamanhoDaLista);


    //PONTEIRO PARA O NOVO VETOR
    int *vetorLidoNaHora;

    //PASSA O ESPAÇO DA MEMÓRIA QUE FOI CRIADO PARA O VETOR
    vetorLidoNaHora = alocaVetor(tamanhoDaLista);

    //LENDO OS VALORES
    for(i = 0; i < tamanhoDaLista; i++){
        printf("\nPlease set new array value on position %d: ", i);
        scanf("\n%d: ", &vetorLidoNaHora[i]);
    }

    imprimeSequencial(vetorLidoNaHora, tamanhoDaLista);

    return 0;
}
