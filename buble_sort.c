#include <stdio.h>

int main() {
    int numberlist[6], numberlist_n = sizeof(numberlist) / sizeof(numberlist[0]);
    for(int i = 0; i < numberlist_n; i++) {
        printf("Insira o %d° número: ", i+1);
        scanf("%d", &numberlist[i]);
    }

    for(int position_1 = 0; position_1 < numberlist_n - 1; position_1++) {
        for(int position_2 = 0; position_2 < numberlist_n - 1 - position_1; position_2++) {
            if(numberlist[position_2] > numberlist[position_2 + 1]){
                int temp = numberlist[position_2];
                numberlist[position_2] = numberlist[position_2 + 1];
                numberlist[position_2 + 1] = temp;
            }
        }
    }

    printf("Lista dos números ordenados, do maior para o menor\n");
    for(int i = 0; i < numberlist_n; i++) {
        printf("%d ", numberlist[i]);
    }
    printf("\n");

}
