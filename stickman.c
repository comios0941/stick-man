#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int d=0,s=0;
int x,c=0,g=0,a=1,f=0;
char comando[1];
void destra();
void giu();
void inserimento();
int main()
{
    system("color b");
    printf(" /°\\ \n/ ° \\ \n|o°o|\n");
    printf(" o\n/|\\\n/ \\");
    while(a==1)
        {
            inserimento();
            giu();
            destra();
            if(f==1)
                system("color a");
        }

    return 0;

}
    void destra()
    {
        system("color b");
        int d1=d,d2=d,d3=d;
        while(d1>0)
        {
            printf("  ");
            d1--;
        }
        if(c==0&&g==0)
            printf(" o\n");
        if(c==1)
        {
        printf(" o  bacioni!\n");
        c=0;
        }
        if(g==1)
        {
        printf(" o  e quindi!\n");
        g=0;
        }
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
    void inserimento()
    {
        comando[0]=getch();
            system("cls");
            printf(" /°\\ \n/ ° \\ \n|o°o|\n");
            if(strcmp(comando,"w")==0)
            {
            if(s!=0)
            s--;
            if(s==0&& (d==0||d==1))
            {
              a=0;
              printf("sei tornato a casa\n");
              f=1;
            }
            }
            if(strcmp(comando,"s")==0)
            {
            s++;
            }
            if(strcmp(comando,"d")==0)
            {
            if(d!=58)
            d++;
            }
            if(strcmp(comando,"a")==0)
            {
            if(d!=0)
            d--;
            }
            if(strcmp(comando,"e")==0)
            {
            c=1;
            }
            if(strcmp(comando,"q")==0)
            {
            g=1;
            }
    }
