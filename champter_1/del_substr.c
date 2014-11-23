/* char * match_str(char * str, char *substr){ */
/*   char * next=str, *sb=substr; */
/*   while(*sb != '\0'){ */
/*     if(*next++ != *sb++){ */
/*       return '\0'; */
/*     } */
/*   } */
/*   return next; */
/* } */

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
