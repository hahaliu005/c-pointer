#include <stdio.h>
int main()
{
  int quantity,price;
  char department[100];
  printf("quantity:\n");
  scanf("%d", &quantity);
  printf("price:\n");
  scanf("%d", &price);
  printf("department:\n");
  scanf("%s", &department);
  printf("quantity:%d price:%d department:%s\n", quantity, price, department);
}
