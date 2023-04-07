#include <stdio.h>
#include <stdlib.h>
#define N 100



    char* delete_func(char s1[],char s2[])
    {
        int i=0;
        char l;
        while((l=s2[i])!='\0')
        {
            int j=0;
            while(s1[j]!='\0')
            {
                if(s1[j]==l)
                {
                    int k=j;
                    while(s1[k]!='\0')
                    {
                        s1[k]=s1[k+1];
                        k++;
                    }
                    j--;
                }
                j++;
            }
            i++;
        }
    return s1;
        }








int main()
{
    char str1[N],str2[N],l;

    int i=0;


    while((l = getchar())!='\n')
    {
        str1[i]=l;
        i++;
    }
    str1[i]='\0';
    i=0;
    while((l=getchar())!='\n')
    {
        str2[i]=l;
        i++;
    }
    str2[i]='\0';
    char *str=delete_func(str1,str2);
    i=0;
    while(str[i]!='\0')
    {
        putchar(str[i]);
        i++;
    }
    return 0;    }
