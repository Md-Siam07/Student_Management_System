#include"header.h"

void batchresult()
{
    int n,y,roll;
    int i,j,k,space;
    double mark[6],cg,cgpa;
    FILE *mark1;
    printf("\nEnter Batch No :");
    scanf("%d",&n);
    if(n==11){
        mark1=fopen("firstyearmark.txt","r");
        y=2;
        }
    else if(n==10){
        mark1=fopen("secondyearmark.txt","r");
        y=4;
        }
    else if(n==9){
        mark1=fopen("thirdyearmark.txt","r");
        y=6;
        }

    else if(n==8){
        mark1=fopen("fourthyearmark.txt","r");
        y=8;
        }
        space=8+(y+1)*14;
    printf("\nRoll");
    for(i=0;i<y;i++) printf("\tsemester_%d",i+1);
    printf("\tCGPA\t");
    printf("Letter Grade\n");
    for(i=0;i<space;i++) printf("=");
    for(i=0;i<2;i++){
            cgpa=0;
            fscanf(mark1,"%d\n",&roll);
            printf("\n%d\t",roll);
            for(j=0;j<y;j++){
                if(j==6){
                    fscanf(mark1,"%lf\t%lf\n",&mark[0],&cg);
                    cgpa+=cg;
                printf("%.2lf\t\t",cg);
                }
                else{
                    fscanf(mark1,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",&mark[0], &mark[1],&mark[2],&mark[3],&mark[4],&mark[5],&cg);
                    cgpa+=cg;
                    printf("%.2lf\t\t",cg);
                }

            }
            printf("%.2lf\t",cgpa/y);
            grade(cgpa/y);

    }
    fclose(mark1);
    int m;
    printf("0. To goto menu\n");
    scanf("%d",&m);
    if(m==0){
        menu();
    }
    else return 0;

}
