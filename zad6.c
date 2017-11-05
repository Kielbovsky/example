#include <stdio.h>
#include <stdlib.h>

int main() {

  int n;
  int a = 1;
printf("Podaj n\n" );
scanf("%d",&n);

if (n<=0) {
  exit(0);
}

while (a<=n) {
  printf(" %d ", a );
  printf(" %d \n", a*a );
  ++a;
}

  return EXIT_SUCCESS;
}
