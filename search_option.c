#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void searchbyroll();

void searchinfo()
{
    printf("\n    =======================================\n");
    int x;


    printf(" \n\n\t1. search by roll no.\n");
    printf(" \t2. search by batch no.\n");
    printf("\n \tEnter your choice: ");
    scanf("%d", &x);

    if(x==1) searchbyroll();
    if(x==2) searchbybatch();

}

