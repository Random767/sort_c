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
              j = i;
              continue;
            }
            if(numberlist[i] == numberlist[j]) {
                continue;
            }  else if(numberlist[i] > numberlist[j]) {
                continue;
            } else if(numberlist[i] < numberlist[j]) {
                iterationscount++;
                int temp1 = numberlist[i], temp2 = numberlist[j];
                numberlist[i] = numberlist[j];
                numberlist[j] = temp1;
            }
        }
    }


    printf("Lista dos números ordenados, do maior para o menor\n");
    for(int i = 0; i < numberlist_n; i++) {
        printf("%d ", numberlist[i]);
    }
    printf("\nNúmero de iteracoes: %d\n", iterationscount);

    return 0;
}
