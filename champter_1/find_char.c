#define NULL 0
char * find_char( char *str, char *chars){
  char *cp;
  if(str != NULL && chars != NULL ){
    for(; *str != '\0'; str++){
      for(cp = chars; *cp != '\0'; cp++){
        if( *str == *cp )
          return str;
      }
    }
  }
  return NULL;
}
