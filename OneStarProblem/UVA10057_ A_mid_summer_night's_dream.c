#include<stdio.h>
#include<stdlib.h>

int lis[1000005]={0};
int compare(const void *a,const void *b){

    return (*(int *)a-*(int *)b);
}

int main(){

    int count=0;
    int first1=0;
    int first2=0;
    int second=0;
    int thrid=0;

    while(scanf("%d",&count)!=EOF){

        for(int i=0;i<count;i++){

            scanf("%d",&lis[i]); //忘記加&
        }
        qsort(lis,count,sizeof(int),compare);
        first1 = lis[(count-1)/2]; //當如果是奇數的話，兩個會相同，但是如果是偶數這行就是左邊!!!這邊有一個很大的疑問，在15中位數是7但是陣列是從0開始，所以是第八位
        first2 = lis[count/2];

        second=0;
        for(int i=0;i<count;i++){
            if(lis[i]==first1 || lis[i]==first2) second++;
        }

        thrid = first2-first1+1;

        printf("%d %d %d\n",first1,second,thrid);

    }
    return 0;
}