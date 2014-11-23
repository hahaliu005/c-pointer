#include <stdio.h>

void main()
{
  signed char checksum = -1;
  char ch;
  while((ch = getchar()) != '\0'){
    checksum += ch;
    printf("%c => %d\n", ch, checksum);

  }
  printf("\n");
}
