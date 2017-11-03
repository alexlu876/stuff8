#include<stdio.h>
#include<stdlib.h>

int sum_square_diff(){
  int a = (101 * 50) * (101 * 50);
  int i;
  for(i = 1; i < 101; i++){
    a = a - (i ^ 2);
  }
  printf("The answer to Sum Square Difference is %d\n", a);
  return a;
}

int even_fib(){
  int a = 1;
  int b = 2;
  int sum = 2;
  int i = 0;
  while(a + b < 4000000){
    if(i % 2 == 0){
      a = a + b;
      if(a % 2 == 0){
	sum += a;
      }
    }
    if(i % 2 == 1){
      b = a + b;
      if(b % 2 == 0){
	sum += b;
      }
    }
    i++;
  }
  printf("Sum of even fibs less than 4 million is %d\n", sum);
  return sum;
}

int specialpyp(){
  int a;
  int b;
  int c;
  int ans;
  for(a = 1; a < 999; a++){
    for(int b = 1; b < 999; b++){
      c = 1000 - a - b;
      if(c * c - (a * a) - (b * b) == 0){
	ans = a * b * c;
      }
    }
  }
  printf("The product of the 3 side lengths of our Special Pythagorean Triangle is %d\n", ans);
  return ans;
}
  

int mult_3_5(){
  int sum = 0;
  int i;
  for(i = 0; i < 1000; i++){
    if(i % 3 == 0 || i % 5 == 0){
      sum+=i;
    }
  }
  printf("The answer to 'Multiples of 3 and 5' is %d\n", sum);
  return sum;
}

int main(){
  mult_3_5();
  even_fib();
  sum_square_diff();
  specialpyp();
  return 0;
}
