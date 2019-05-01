#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void inputinfo()
{
    printf("\n     ======================================\n");
    printf("\n\n");
    int i,n;

    FILE *fp;
    fp= fopen("info.txt", "w");

    for(i=0; i<8; i++)
    {

        printf("\n \tFor student %d:\n", i+1);
        fflush(stdin);

        printf(" \n\tEnter name: ");
        scanf("%[^\n]s", student[i].name);
        fflush(stdin);

        printf(" \tEnter address: ");
        scanf("%[^\n]s", student[i].address);
        fflush(stdin);

        printf(" \tEnter roll: ");
        scanf("%d", &student[i].roll);
        fflush(stdin);

        printf(" \tEnter reg: ");
        scanf("%d", &student[i].reg);

        fprintf(fp, "%s\n%s\n%d\n%d\n", student[i].name, student[i].address, student[i].roll, student[i].reg);
    }

   fclose(fp);


    printf("\n\n\tTo go to menu, press 0\n\telse to exit, press 1.\n\n");

    printf("\tEnter your choice: ");
    scanf("%d", &n);
    if(n==0) menu();
    else return 0;

}

