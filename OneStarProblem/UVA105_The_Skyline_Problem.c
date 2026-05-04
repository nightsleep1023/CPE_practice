#include<stdio.h>

int main(){
    int r=0;
    int h=0;
    int l=0;
    int max=0;
    int min=10000;
    int array[10005] = {0};
    while(scanf("%d %d %d",&r,&h,&l)!=EOF){
        if(min>r){
            min = r;
        }
        if(max<l){
            max = l;
        }
        for(int i=r;i<l;i++){
            if(array[i]<h){
                array[i] = h;
            }
        }
    }
    h=0;
    for(int i=min;i<=max;i++){
        
        if(array[i]!=h){
            h = array[i];
            printf("%d %d",i,array[i]);
            if(i!=max){
                printf(" ");
            }
        }
    }
}