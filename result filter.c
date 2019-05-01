#include"header.h"
void resultfilter()
{
    FILE *m1,*m2,*m3,*m4;
    int roll,i,j,k;
    double upper, lower,cg,cgp,mark[6];
    m1=fopen("firstyearmark.txt","r");
    m2=fopen("secondyearmark.txt","r");
    m3=fopen("thirdyearmark.txt","r");
    m4=fopen("fourthyearmark.txt","r");
    printf("\n\t\tEnter the lower and upper limits: ");
    scanf("%lf%lf",&lower,&upper);
    for(i=0;i<2;i++){
            cgp=0;
        fscanf(m1,"%d\n",&roll);
            for(j=0;j<2;j++){
                fscanf(m1,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",&mark[0], &mark[1],&mark[2],&mark[3],&mark[4],&mark[5],&cg);
                cgp+=cg;
            }
        cgp/=2;
        if(cgp>=lower &&cgp<=upper){
            printf("\n\t%d",roll);
        }

    }
    for(i=0;i<2;i++){
            cgp=0;
        fscanf(m2,"%d\n",&roll);
            for(j=0;j<4;j++){
                fscanf(m2,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",&mark[0], &mark[1],&mark[2],&mark[3],&mark[4],&mark[5],&cg);
                cgp+=cg;
            }
        cgp/=4;
        if(cgp>=lower &&cgp<=upper){
             printf("\n\t%d",roll);
        }

    }
    for(i=0;i<2;i++){
            cgp=0;
        fscanf(m3,"%d\n",&roll);
            for(j=0;j<6;j++){
                fscanf(m3,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",&mark[0], &mark[1],&mark[2],&mark[3],&mark[4],&mark[5],&cg);
                cgp+=cg;
            }
        cgp/=6;
        if(cgp>=lower &&cgp<=upper)
        printf("\n\t%d",roll);
    }
    for(i=0;i<2;i++){
            cgp=0;
        fscanf(m4, "%d\n",&roll);
            for(j=0;j<8;j++){
                if(j==6){
                    fscanf(m4,"%lf%lf",&mark[0],&cg);
                }
                else{
                fscanf(m4,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",&mark[0], &mark[1],&mark[2],&mark[3],&mark[4],&mark[5],&cg);
                cgp+=cg;}
            }
        cgp/=8;
        if(cgp>=lower &&cgp<=upper)
        printf("\n\t%d",roll);
    }
}
