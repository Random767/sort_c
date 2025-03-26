#include <stdio.h>

int main() {
    int numberlist[6], numberlist_n = sizeof(numberlist) / sizeof(numberlist[0]);
    for(int i = 0; i < numberlist_n; i++) {
        printf("Insira o %d° número: ", i+1);
        scanf("%d", &numberlist[i]);
    }

    for(int index = 0; index < numberlist_n - 1; index++) {
        for(int position = 0; position < numberlist_n - 1 - index; position++) {
            if(numberlist[position] > numberlist[position + 1]){
                int temp = numberlist[position];
                numberlist[position] = numberlist[position + 1];
                numberlist[position + 1] = temp;
            }
        }
    }

    printf("Lista dos números ordenados, do maior para o menor\n");
    for(int i = 0; i < numberlist_n; i++) {
        printf("%d ", numberlist[i]);
    }
    printf("\n");

}
