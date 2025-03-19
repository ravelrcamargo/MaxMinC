#include <stdio.h>
#include <stdlib.h>
const int TAM_VETOR = 10;

void maxMin1(int vet[TAM_VETOR], int *max, int *min);
void maxMin2(int vet[TAM_VETOR], int *max2, int *min2);
void maxMin3(int vet[TAM_VETOR], int *max3, int *min3);

int main()
{
    int vetor[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    int maximo, minimo;
    int maximo2, minimo2;

    maxMin1(vetor, &maximo, &minimo);
    maxMin2(vetor, &maximo2, &minimo2);

    printf("O valor maximo é: %d\n", maximo);
    printf("O valor maximo é: %d\n", minimo);

    printf("O valor maximo é: %d\n", maximo2);
    printf("O valor maximo é: %d\n", minimo2);


    return 0;
}

void maxMin1(int vet[TAM_VETOR], int *max, int *min){
    int i;
    *max = vet[0];
    *min = vet[0];

    for(int i = 0; i < TAM_VETOR; i++){
        if(vet[i] > *max){
            *max = vet[i];
        }
        if(vet[i] < *min){
            *min = vet[i];
        }
    }

}
void maxMin2(int vet[TAM_VETOR], int *max2, int *min2){
    int i;
    *max2 = vet[0];
    *min2 = vet[0];
    for(int i = 0; i < TAM_VETOR; i++){
        if(vet[i] > *max2){
            *max2 = vet[i];
        }else if(vet[i] < *min2){
            *min2 = vet[i];
        }

    }
}
void maxMin3(int vet[TAM_VETOR], int *max3, int *min3){

}
