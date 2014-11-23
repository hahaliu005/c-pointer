#include <stdio.h>

int main()
{
  char now;
  int leftLen;
  while((now = getchar()) != EOF){
    if(now == '{'){
      leftLen ++;
    }
    if(now == '}'){
      leftLen --;
    }
    if(leftLen < 0){
      printf("no1");
      return 0;
    }
  }
  if (leftLen == 0){
    printf("yes\n");
  }else{
    printf("no\n");
  }
  return 0;
}
