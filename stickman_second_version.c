#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int x, d=0,s=0;
void destra();
void giu();
int main()
{
    system("color c");
    printf(" o\n/|\\\n/ \\");
    while(1==1)
    {
        scanf("%s",&x);
        system("cls");
        printf(" /\\ \n/  \\ \n|  | ");
        switch(x)
        {
            case 100:
                d++;
            break;
            case 97:
                d--;
            break;
            case 119:
                s--;
            break;
            case 115:


                s++;
            break;
        }
        giu();
        destra();
    }
    return 0;

}
    void destra()
    {
        system("color c");
        int d1=d,d2=d,d3=d;
        while(d1>0)
        {
            printf("  ");
            d1--;
        }
        printf(" o\n");
        while(d2>0)
        {
            printf("  ");
            d2--;
        }
        printf("/|\\\n");
        while(d3>0)
        {
            printf("  ");
            d3--;
        }
        printf("/ \\\n");
    }

    void giu()
    {
        int s1=s;
        while(s1>0)
        {
           printf("\n\n");
           s1--;
        }
    }
