#include"header.h"

double cgpa(double x)
{

    if(x>=80) return 4.00;
    else if(x>=75 && x<80) return 3.75 ;
    else if(x>=70 && x<75) return 3.5;
    else if(x>=65 && x<70) return 3.25;
    else if(x>=60 && x<65) return 3.00;
    else if(x>=55 && x<60) return 2.75;
    else if(x>=50 && x<55) return 2.5;
    else if(x>=45 && x<50) return 2.25;
    else if(x>=40 && x<45) return 2.00;
    else return 0;

}

