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
    p++;
    q++;
  }
}
