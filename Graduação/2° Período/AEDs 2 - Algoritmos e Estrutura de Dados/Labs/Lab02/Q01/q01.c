#include <stdio.h>
#include <string.h>

int main(void) {
  char primeiro[100];
  char segundo[100];

  while(scanf("%s %s", primeiro, segundo) != EOF){
    int size1 = strlen(primeiro);
    int size2 = strlen(segundo);
    int index1 = 0, index2 = 0;
    int i = 0;
    while(i < size1 - 1){
      if(i < size1){
        printf("%c", primeiro[index1]);
        index1 ++;
        i++;
      }
      if(i < size1){
        printf("%c", segundo[index2]);
        index2 ++;
        i++;
      }      
    }
    i = 0;
    while(i < size2 - 1){
      if(i < size2 && index1 < size1){
        printf("%c", primeiro[index1]);
        index1 ++;
      }
      if(i < size2 && index2 < size2){
        printf("%c", segundo[index2]);
        index2 ++;
      }
      i++;
    }
    printf("\n");
  }
  return 0;
}