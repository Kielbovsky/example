#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int a,b,c;

printf("Podaj a b c\n" );
scanf("%d %d %d",&a,&b,&c );

if (a<=0||b<=0||c<=0) {
  exit(0);
}

if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a) {
  printf("Podane liczby tworzą trójkę pitagorejską\n" );

}  else{
  printf("Liczby nie tworzą trójki pitagorejskiej\n" );
}

  return EXIT_SUCCESS;
}
