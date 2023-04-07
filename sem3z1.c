#include <stdio.h>
#include <stdlib.h>


    char print_str(char begin, char end)
    {
        while(begin>end)
        {
            putchar(begin);
            begin--;
        }
        while(begin<end)
        {
            putchar(begin);
            begin++;

        }
        putchar(begin);
        return begin;
    }
    int main()
    {
        char l[3]={' ',' ',' '};
        char end= ' ';
        while((l[2]=getchar())!='\n')
        {
            if (l[0]!=' ' && l[2]!='11-11111' && l[1]=='-'){
                if (end==l[0] && l[0]>l[2]) l[0]--;
                else if (end==l[0] && l[0]<l[2]) l[0]++;
                end=print_str(l[0],l[2]);
            }
            else if (l[1]=='-') putchar('-');
            l[0]=l[1];
            l[1]=l[2];


        }
        if (l[1]=='-') putchar('-');
        return EXIT_SUCCESS;
    }




