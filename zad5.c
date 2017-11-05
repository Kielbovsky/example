#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int a,b;

printf("Podaj a b\n" );
scanf("%d %d",&a,&b);

if (a==b) {
  printf("a jest równe b\n" );
}

(a>b) ? printf("%d jest większe od %d\n",a,b ) : printf("%d jest mniejsze od %d\n",a,b );

  return EXIT_SUCCESS;
}
