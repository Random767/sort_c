#include <stdio.h>


int main(void) {
  int numberlist[6], numberlist_n = sizeof(numberlist) / sizeof(numberlist[0]);
  for(int i = 0; i < numberlist_n; i++) {
    printf("Insira o %d° numero: ", i + 1);
    scanf("%d", &numberlist[i]);
  }

  for(int i = 1; i < numberlist_n; i++) {
    int chave = numberlist[i];
    int j = i - 1;
    while(j >= 0 && numberlist[j] > chave) {
      numberlist[j+1] = numberlist[j];
      j--;
    }
    
    numberlist[j+1] = chave;
  }


  for(int i = 0; i < numberlist_n; i++){
    printf("%d ", numberlist[i]);
  }
  printf("\n");
}
