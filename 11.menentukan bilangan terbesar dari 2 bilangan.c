#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b;
  printf("bilangan 1 :");
  scanf("%i",&a );
  printf("bilangan 2 :");
  scanf("%i",&b );

  if(a>b)
  printf("bilangan terbesar adalah :%i",a );
  else
  printf("bilangan terbesar adalah :%i",b );
  return 0;
}
