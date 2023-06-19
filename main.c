#include <stdio.h>

int main(void) {
  
  int num;
  
  printf("Digite um número: \n");
  scanf("%d", &num);

    if(num % 2 == 0){
      printf("%d, é par", num);
    }else{
      printf("%d, não é par", num);
    }
  
  return 0;
}
