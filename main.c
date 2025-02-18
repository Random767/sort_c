#include <stdio.h>

int main(void) {

    int numberlist[4], iterationscount = 0;
    int numberlist_n = sizeof(numberlist) /sizeof(numberlist[0]);
    for(int i = 0; i < numberlist_n; i++) {
        printf("Digite o %d° número: ", i+1);
        scanf("%d", &numberlist[i]);
    }

    for(int i = 0; i < numberlist_n; i++) {
        for(int j = 0; j <numberlist_n; j++) {
            if(j < i) {
              printf("Passando para o próximo número principal da lista...\n");
              j = i;
              continue;
            }
            if(numberlist[i] == numberlist[j]) {
                printf("%d == %d\n", numberlist[i], numberlist[j]);
                continue;
            }  else if(numberlist[i] > numberlist[j]) {
                printf("%d > %d\n", numberlist[i], numberlist[j]);
                continue;
            } else if(numberlist[i] < numberlist[j]) {
                iterationscount++;
                printf("%d < %d\n", numberlist[i], numberlist[j]);
                int temp1 = numberlist[i], temp2 = numberlist[j];
                numberlist[i] = numberlist[j];
                numberlist[j] = temp1;
                //printf("Trocando de posição...\n");
                //printf("numberlist[%d] = numberlist[%d]\n", i, j);
                //printf("numberlist[%d] = numberlist[%d]\n\n", j, i);
            }
        }
    }


    printf("Lista dos números ordenados, do maior para o menor\n")
    for(int i = 0; i < numberlist_n; i++) {
        printf("%d ", numberlist[i]);
    }
    printf("\nNúmero de iteracoes: %d\n", iterationscount);

    return 0;
}
