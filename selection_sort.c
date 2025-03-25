#include <stdio.h>

int main(void) {

    int numberlist[6];
    int numberlist_n = sizeof(numberlist) /sizeof(numberlist[0]);
    for(int i = 0; i < numberlist_n; i++) {
        printf("Digite o %d° número: ", i+1);
        scanf("%d", &numberlist[i]);
    }

    for(int position_1 = 0; position_1 < numberlist_n; position_1++) {
        int maior_index = position_1;

        for(int position_2 = position_1 + 1; position_2 < numberlist_n; position_2++) {
            if(numberlist[position_2] > numberlist[maior_index]) {
                maior_index = position_2;
            }
        }
        if(maior_index != position_1) {
            int temp = numberlist[position_1];
            numberlist[position_1] = numberlist[maior_index];
            numberlist[maior_index] = temp;
        }
    }


    printf("Lista dos números ordenados, do maior para o menor\n");
    for(int i = 0; i < numberlist_n; i++) {
        printf("%d ", numberlist[i]);
    }

    printf("\n");

    return 0;
}
