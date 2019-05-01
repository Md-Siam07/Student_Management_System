#include"header.h"

double grade(double x)
{

    if(x==4) printf("A+") ;
    else if(x>=3.75 && x<4) printf("A\n");
    else if(x>=3.5 && x<3.75) printf("A-\n");
    else if(x>=3.25 && x<3.5) printf("B+\n");
    else if(x>=3 && x<3.25) printf("B\n");
    else if(x>=2.75 && x<3) printf("B-\n");
    else if(x>=2.5 && x<2.75) printf("C+\n");
    else if(x>=2.25 && x<2.50) printf("C\n");
    else if(x>=2 && x<2.25) printf("D\n");
    else printf("F");

}


