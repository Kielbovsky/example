#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int n,m;

printf("Podaj n m\n" );
scanf("%d %d",&n,&m);

if (n<=0||m<=0) {
  exit(0);
}
for (int i = 0; i < n; i++){
  for (int j = 0; j < m; j++){
    putchar('*');
    putchar(' ');
  }
  putchar('\n');
}


  return EXIT_SUCCESS;
}
