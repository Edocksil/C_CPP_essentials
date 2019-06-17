#include<stdio.h>
int main(){
    char op[10];
    int x,y;
    scanf("%s%d%d", &op, &x, &y);
    if (strcmp(op,"add")==0) printf("%s %d %d: %d",op,x,y ,x+y); else
    if (strcmp(op,"mul")==0) printf("%s %d %d: %d",op,x,y ,x*y); else
    if (strcmp(op,"sub")==0) printf("%s %d %d: %d",op,x,y ,x-y);
    else printf("Wrong input");


}
