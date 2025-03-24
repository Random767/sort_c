#include <stdio.h>

int main(void) {

    int numberlist[6], iterationscount = 0;
    int numberlist_n = sizeof(numberlist) /sizeof(numberlist[0]);
    for(int i = 0; i < numberlist_n; i++) {
        printf("Digite o %d° número: ", i+1);
        scanf("%d", &numberlist[i]);
    }

    int position_2 = 0;

    for(int position_1 = 0; position_1 < numberlist_n; position_1++) {
        iterationscount = 0;
        int maior_index = position_1;
        
        for(position_2 = 0; position_2 <numberlist_n; position_2++) {
            if(position_2 < position_1) {
              position_2 = position_1;
              continue;
            } else if(numberlist[position_1] < numberlist[position_2] || numberlist[position_1] == numberlist[position_2]) {
                break;
            }

            maior_index = position_2;

            iterationscount++;
        }

        if(iterationscount > 0) {
            int temp = numberlist[maior_index];
            numberlist[maior_index] = numberlist[position_1];
            numberlist[position_1] = numberlist[maior_index];

        }

    }


    printf("Lista dos números ordenados, do maior para o menor\n");
    for(int i = 0; i < numberlist_n; i++) {
        printf("%d ", numberlist[i]);
    }
    printf("\nNúmero de iteracoes: %d\n", iterationscount);

    return 0;
}
