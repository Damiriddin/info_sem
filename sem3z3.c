#include <stdio.h>
#include <stdlib.h>


void readstroke(int * data)
{
    char ch;
    while((ch=getchar())!='\n')
    {
        if(ch>=48 && ch<=57)
        {
            data[ch-48]++;
        }
    }
}


void drawHorizontalChart(int * data)
{
    for (int i=0;i<10;i++)
    {
        printf("%d ",i);
        for (int j=0;j<data[i];j++)
            printf("#");
        printf("\n");
    }
}


void drawVerticalchart(int * data)
{
    int max=0;
    for(int i=0;i<10;i++) if (data[i]>max) max=data[i];
    for(int x=max;x>0;x--){
        for(int i=0;i<10;i++){
            if (data[i]>=x){
                printf("#");
            }else{
            printf(" ");
            }
        }
        putchar('\n');
    }
    for(int i =0;i<10;i++) printf("%d ",i);
}






int main()
{
    int data[10]={0};
    readstroke(data);
    drawHorizontalChart(data);
    printf("\n");
    drawVerticalchart(data);
    printf("Hello world!\n");
    return EXIT_SUCCESS;
}
