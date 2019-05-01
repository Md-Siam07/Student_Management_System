#include"header.h"

void searchresult()
{
    int n;
    printf("\t1. Batch-wise Result.");
    printf("\t2. Individual Result");
    printf("\nEnter your choice: ");
    scanf("%d",&n);
    if(n==1){
        batchresult();
    }
    if(n==2){
        individual_result();
    }
}
