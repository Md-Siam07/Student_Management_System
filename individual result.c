
#include"header.h"

void individual_result(){

FILE *fp;
int x,y, i, j, k, roll,m;
double cgp,cg,mark[6];
printf("\nEnter Roll: ");
scanf("%d", &x);

if(x/100==11) { fp= fopen("firstyearmark.txt", "r"); y=2.0;}
if(x/100==10) { fp= fopen("secondyearmark.txt", "r"); y=4.0;}
if(x/100==9) {  fp= fopen("thirdyearmark.txt", "r"); y=6.0; }
if(x/100==8) {  fp= fopen("fourthyearmark.txt", "r"); y=8.0; }

for(i=0; i<2; i++){
    cgp=0;
    fscanf(fp,"%d\n", &roll);
    if(x==roll){
        printf("Result for Roll: %d\n\n", roll);

        for(j=0; j<y; j++){

            if(j==6){
                     printf("Course\tmark\tcg.\tletter grade\n");
        printf("======\t====\t===\t============\n\n");
                fscanf(fp, "%lf\t%lf\n", &mark[0], &cg);
                cgp+=cg;
                printf("SE701\t%.2lf\t%.2lf\t", mark[0], cg);
                grade(cg);
                printf("\n");
            }
            else {
             fscanf(fp,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",&mark[0], &mark[1],&mark[2],&mark[3],&mark[4],&mark[5],&cg);
             cgp+=cg;
              printf("Course\tmark\tcg.\tletter grade\n");
                printf("======\t====\t===\t============\n\n");
             for(m=1; m<7; m++){
             printf("SE%d0%d \t%.2lf\t%.2lf\t",j+1,m,mark[m-1],cgpa(mark[m-1]));
             grade(cgpa(mark[m-1]));
             printf("\n");
            }
            }
            printf("\nSemester_%d:\n\tCGPA: %.2lf\n\tLetter grade: ", j+1, cg);
            grade(cg);
            printf("\n\n");
        }
        printf("\n\n\tFinal CGPA: %.2lf\n\tLetter grade: ",cgp/y);
        grade(cgp/y);
        return 0;
    }
    else {
        for(j=0; j<y; j++){
                if(j==6){
                fscanf(fp, "%lf\t%lf\n", &mark[0], &cg);

            }
            else {
             fscanf(fp,"%lf\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",&mark[0], &mark[1],&mark[2],&mark[3],&mark[4],&mark[5],&cg);
            }


        }


    }




}
printf("\n\nRESULT NOT FOUND!!!");



fclose(fp);


}
