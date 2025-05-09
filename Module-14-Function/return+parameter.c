#include <stdio.h>

  int sub(int num1, int num2){
    
    int sub = num1 - num2;
    
    return sub;
  }

 int sum(int num1, int num2) {
   
   int sum = num1 + num2; 
   
   return sum;
 }

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  int val1 = sum(a, b);
  int val2 = sub(a, b);
  
    printf("%d %d", val1, val2);
}