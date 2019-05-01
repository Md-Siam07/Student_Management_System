#include"header.h"

void searchbyroll()
{
    printf("\n    =======================================\n");

    int roll;
    int i,j,n;
    FILE *fp;
    fp= fopen("info.txt", "r");

    printf("\n \tEnter the roll: ");

    scanf("%d", &roll);

    printf("\n\n  *** Here is the profile of the student you're looking for *** \n\n");

    for(i=0; i<8; i++)
    {

        fgets(student[i].name, 22, fp);
        fgets(student[i].address, 82, fp);
        fscanf(fp, "%d", &student[i].roll);
        fscanf(fp, "%d\n", &student[i].reg);

        if(roll==student[i].roll)
        {printf(" \tName   : %s \tAddress: %s \tRoll   : %d\n \tReg    : %d\n\n", student[i].name,student[i].address, student[i].roll, student[i].reg);}
    }






    printf("\n\n\tTo go to menu, press 0\n\telse to exit, press 1.\n\n");

    printf("\tEnter your choice: ");
    scanf("%d", &n);
    if(n==0) menu();
    else return 0;

}

