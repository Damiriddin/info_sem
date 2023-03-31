#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int ch;
    int flag;

    while((ch=getchar())!=EOF){
        if (ch==' ' || ch=='\t'){
            if(flag==1){
                putchar('\n');
                    flag=0;
            }
        }
        else {
            putchar(ch);
            flag=1;
        }
            }
    if (flag==1)
        putchar('\n');
return 0;
}
