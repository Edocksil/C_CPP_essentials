#include <stdio.h>
void triangle(int rows) {
    int i, j;
    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("\\ ");
        }
        printf("\n");
    }
}
void floydstr(int rows) {
  int i,  c, a = 1;
  for (i = 1; i <= rows; i++)
  {
    for (c = 1; c <= i; c++)
    {
      printf("%d ",a);
      a++;
    }
    printf("\n");
  }
}

int main(int argc, char *argv[]){
	int n;
	scanf("%d", &n);
	triangle(n);
	floydstr(n);
	return 0;
}

