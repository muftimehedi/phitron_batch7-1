#include <stdio.h>

void hello(int i) {
  
  if(i==6){
    return;
  }
  printf("%d", i);
  hello(i+1);
}

int main()
{
    int i = 1;
    hello(i);
}