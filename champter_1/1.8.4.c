#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 1001

int main()
{
  char input[MAX_LEN];
  int len;
  char logest[MAX_LEN];
  int longest_len = -1;

  while(fgets(input, MAX_LEN, stdin) != NULL){
    len = strlen(input);
    if (len > longest_len){
      longest_len = len;
      strcpy(logest, input);
    }
  }
  if (longest_len >= 0)
    printf("longest_str: %s\n", logest);
  return EXIT_SUCCESS;
}
