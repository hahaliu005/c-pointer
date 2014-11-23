#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
  char *string;
  size_t len = 1000;
  ssize_t read;
  int num=1;

  while(getline(&string, &len, stdin) != -1){
    printf("%d: %s", num,string);
    num++;
  }
}
