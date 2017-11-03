#include <stdio.h>
#include <stdlib.h>
int main(){
  int p;
  int c;
  for(p = 0; p < 176; p++){
    for(c = 1; c < p; c++){
      int a = 125 * p;
      int b = 126 * p;
      if(!((a + c)%175)){
	printf("smallest p and c: %d and %d\n", p, c);
      }
    }
  }
  printf("gote");
  return 1;
}
