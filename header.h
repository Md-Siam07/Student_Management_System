#include<stdio.h>
#include<stdlib.h>

void markinput();
void inputinfo();
void outputinfo();
void searchinfo();
void searchbyroll();
void searchbybatch();
void allmarkshow();
double cgpa();
void searchresult();
double grade();
void individual_result();
void resultfilter();

struct input
{
    char name[22], address[82];
    int reg,roll;
    //double mark1, mark2, mark3, mark4, mark5, mark6;
    double cg;

};
float marks[6];
struct input student[140];
