#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void outputinfo()
{
    printf("\n    =======================================\n");
    int i,n;

    FILE *fp;
    fp= fopen("info.txt", "r");



    printf("\n\n\t***Here are the profiles of students 1st semester:***");

    for(i=0; i<8; i++)
    {
        printf("\n\n  Profile of student %d:\n\n",i+1);

        fgets(student[i].name, 22, fp);
        fgets(student[i].address, 82, fp);
        fscanf(fp, "%d", &student[i].roll);
        fscanf(fp, "%d\n", &student[i].reg);
        //fscanf(fp, "%s\n%s\n%s\n%d\n", &student[i].name, &student[i].address, &student[i].roll, &student[i].reg);
        printf("\tName   : %s\tAddress: %s\tRoll   : Bsse%d\n\tReg    : %d\n", student[i].name,student[i].address, student[i].roll, student[i].reg);
    }
    fclose(fp);

    printf("\n\n  ***All the inputs were shown!***");


lab:
    printf("\n\n\tTo go to menu, press 0\n\telse to exit, press 1.\n\n");

    printf("\tEnter your choice: ");
    scanf("%d", &n);
    if(n==0) menu();
    else if (n==1) return 0;
    else
    {
        printf(" wrong input, lets try again.\n");
        goto lab;
    }
}


