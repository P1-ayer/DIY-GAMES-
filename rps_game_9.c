// Rock paper scissors game using random number generator
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include<conio.h>
int randnum()
{
    srand(time(NULL));
    return rand() % 3;
}
int main()
{
    char cc, p;
    int c, ppt = 0, cpt = 0;
    char name[10];
    printf("\nCAPS ON PLEASE");
    printf("\nEnter Player name :");
    // fgets(name,sizeof(name),stdin);
    gets(name);
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter \nR for Rock\nP for paper\nS for scissors\n");
        printf("%s Turn :", name);
        // puts(name);
        scanf("%c", &p);
        getchar();
        printf("\nComputer Turn :");
        c = randnum();
        if (c == 0)
        {
            cc = 'R';
        }
        else if (c == 1)
        {
            cc = 'P';
        }
        else
        {
            cc = 'S';
        }

        printf("%c", cc);
        if (cc == p)
        {
            printf("\nIt's a TIE. Both get 1 point");
            cpt++;
            ppt++;
        }
        else if (cc == 'R' && p == 'P' || cc == 'P' && p == 'S' || cc == 'S' && p == 'R')
        {
            printf("\n%s WON !!", name);
            ppt++;
        }
        else
        {
            printf("\nCOMPUTER WON !!");
            cpt++;
        }
        printf("\nThe scores after round %d are", i + 1);
        printf("\n%s = %d", name, ppt);
        printf("\nCOMPUTER = %d", cpt);
    }
    printf("\nThe Result is");
    // printf("\n%s = %d", name, ppt);
    // printf("\nCOMPUTER = %d", cpt);
    if (ppt > cpt)
    {
        printf("\n%s WON THE GAME", name);
    }
    else if (ppt < cpt)
    {
        printf("\n%s LOST COMPUTER WON", name);
    }
    else
    {
        printf("\nIT'S A TIE \n TRY AGAIN");
    }
    printf("\nTHANK YOU %s FOR PLAYING", name);
    getch();
    return 0;
}
