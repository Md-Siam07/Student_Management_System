#include"header.h"

void markinput(){

    printf("\n    ==========================================\n");
    int i,n,j,k ;
    double mark[6],cg;
    FILE *fp;
    fp= fopen("info.txt", "r");
    FILE *mark1,*mark2,*mark3,*mark4;
    mark1= fopen("firstyearmark.txt", "w");
    mark2= fopen("secondyearmark.txt", "w");
    mark3= fopen("thirdyearmark.txt", "w");
    mark4= fopen("fourthyearmark.txt", "w");

    int x,l;

    for(i=0; i<8; i++)
    {

        fgets(student[i].name, 22, fp);
        fgets(student[i].address, 82, fp);
        fscanf(fp, "%d", &student[i].roll);
        fscanf(fp, "%d\n", &student[i].reg);

        x=student[i].roll/100;
        printf("Name: %s\nRoll: Bsse%d\n\n", student[i].name, student[i].roll);

        if(x==11){
                fprintf(mark1,"%d\n", student[i].roll);
                for(j=0; j<2; j++){
                cg=0.00;
                for(k=0; k<6; k++){

                    printf("\tSE%d0%d : ", j+1, k+1);
                    scanf("%lf", &mark[k]);
                    cg+=cgpa(mark[k]);
                    }
                    cg/=6;
                    for(l=0;l<6;l++){
                        if (cgpa(mark[l])==0){
                            cg=0;
                        }
                    }
                    printf("\n \tThe cgpa of semester-%d is %lf\n",j+1,  cg);
                    fprintf(mark1,"%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n",mark[0], mark[1],mark[2],mark[3],mark[4],mark[5],cg);

                }
        }
        else if(x==10){
                fprintf(mark2,"%d\n", student[i].roll);
                for(j=0; j<4; j++){
                cg=0.00;
                for(k=0; k<6; k++){

                    printf("\tSE%d0%d : ", j+1, k+1);
                    scanf("%lf", &mark[k]);
                    cg+=cgpa(mark[k]);
                    }
                    cg/=6;
                    for(l=0;l<6;l++){
                        if (cgpa(mark[l])==0){
                            cg=0;
                        }
                    }
                    printf("\n \tThe cgpa of semester-%d is %lf\n",j+1,  cg);
                    fprintf(mark2,"%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n",mark[0], mark[1],mark[2],mark[3],mark[4],mark[5],cg);

                }
        }
        else if(x==9){
                fprintf(mark3,"%d\n", student[i].roll);
                for(j=0; j<6; j++){
                cg=0.00;
                for(k=0; k<6; k++){

                    printf("\tSE%d0%d : ", j+1, k+1);
                    scanf("%lf", &mark[k]);
                    cg+=cgpa(mark[k]);
                    }
                    cg/=6;
                    for(l=0;l<6;l++){
                        if (cgpa(mark[l])==0){
                            cg=0;
                        }
                    }
                    printf("\n \tThe cgpa of semester-%d is %lf\n",j+1,  cg);
                    fprintf(mark3,"%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n",mark[0], mark[1],mark[2],mark[3],mark[4],mark[5],cg);

                }
        }
        else if(x==8){
                fprintf(mark4,"%d\n", student[i].roll);
                for(j=0; j<6; j++){
                cg=0.00;
                for(k=0; k<6; k++){

                    printf("\tSE%d0%d : ", j+1, k+1);
                    scanf("%lf", &mark[k]);
                    cg+=cgpa(mark[k]);
                    }
                    cg/=6;
                    for(l=0;l<6;l++){
                        if (cgpa(mark[l])==0){
                            cg=0;
                        }
                    }
                    printf("\n \tThe cgpa of semester-%d is %lf\n",j+1,  cg);
                    fprintf(mark4,"%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n",mark[0], mark[1],mark[2],mark[3],mark[4],mark[5],cg);

                }
                printf("\tSE701 : ");
                scanf("%d",&mark[0]);
                cg=cgpa(mark[0]);


                printf("\n \tThe cgpa of semester-7 is %lf\n",  cg);
                fprintf(mark4,"%.2lf\t%.2lf\n",mark[0],cg);
                for(j=7;j<8;j++){
                        cg=0.00;
                        for(k=0;k<6;k++){
                            printf("\tSE%d0%d : ",j+1,k+1);
                            scanf("%d",&mark[k]);
                            cg+=cgpa(mark[k]);

                        }
                        cg/=6;
                        for(l=0;l<6;l++){
                        if (cgpa(mark[l])==0){
                            cg=0;
                        }
                    }
                        fprintf(mark4,"%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n",mark[0], mark[1],mark[2],mark[3],mark[4],mark[5],cg);

                }
        }
    }
    fclose(fp);
    fclose(mark1);
    fclose(mark2);
    fclose(mark3);
    fclose(mark4);


    printf("\n\n\tTo go to menu, press 0\n\tPress any other key to exit\n\n");

    printf("\tEnter your choice: ");
    scanf("%d", &n);

    if(n==0) menu();
    else  return 0;

}



