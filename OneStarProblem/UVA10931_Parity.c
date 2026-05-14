#include<stdio.h>

int main(){
    int num=10;
    while(num!=0){
        printf("%d",num%2);
        num/=2;
    }
    
    
    return 0;
}