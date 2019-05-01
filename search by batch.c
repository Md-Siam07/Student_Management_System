#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void searchbybatch()

{
    printf("\n    =======================================\n");

    int a,b,i,x,y,j=0,n;

    printf("\n \tEnter the batch no: (example: 11, 06...)\n");

    scanf("%d",&a);

    FILE *fp= fopen("info.txt", "r");
    printf("\n\n");

    for(i=0; i<8; i++)
    {
        fgets(student[i].name, 22, fp);
        fgets(student[i].address, 82, fp);
        fscanf(fp, "%d", &student[i].roll);
        fscanf(fp, "%d\n", &student[i].reg);

        x=student[i].roll/100;

        if(x==a)
        {
            printf("  Student no %d\n\n", j+1);
            printf(" \tName   : %s \tAddress: %s \tRoll   : BSSE%d\n \tReg    : %d\n\n", student[i].name,student[i].address, student[i].roll, student[i].reg);
            j++;
        }
    }

    fclose(fp);

    printf("\n\n\tTo go to menu, press 0\n\telse to exit, press 1.\n\n");

    printf("\tEnter your choice: ");
    scanf("%d", &n);
    if(n==0) menu();
    else  return 0;


}

