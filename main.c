#include <stdio.h>
#include <stdlib.h>
#define N 20
int main()
{
    char name[N];
    int i=0;
    printf("Enter your name: ");
    while((name[i]=getchar())!='\n'){
        i++;
    }
    name[i]='\0';
for(int j=1;j<=i+4;j++){
        putchar('*');
}
printf("\n* %s *\n",name);
for(int j=1;j<=i+4;j++){
        putchar('*');
}
    return 0;
}
