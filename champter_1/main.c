#include <stdio.h>

char * match_str(char *str, char *want){
  while(*want != '\0'){
    if(*str++ != *want++){
      return '\0';
    }
  }
  return str;
}
int del_substr(char *str, char *substr){
  char * next;
  while(*str != '\0'){
    next = match_str(str, substr);
    if(next != '\0'){
      break;
    }
    str++;
  }
  if (*str == '\0'){
    return 0;
  }
  while(*str++ = *next++)
    ;
  return 1;
}

void reverse_string(char *string){
  char * p = string;
  char * q = string;
  char temp;
  while(*p != '\0'){
    ++p;
  }
  p--;
  while (q < p){
    temp=*q;
    *q = *p;
    *p = temp;
    p--;
    q++;
  }
}

int main(){
  char str[] = "ABCDEF";
  char sub[] = "CD";
  del_substr(str, sub);
  reverse_string(str);
  printf("del_substr : %s \n", str);
  printf("reverse string: %s  \n", str);
  return 0;
}
