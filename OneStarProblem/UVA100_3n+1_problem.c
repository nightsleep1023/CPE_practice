#include<stdio.h>

int cache[1000001] = {0};  //增加搜尋速度的

int getNumber(int a){
    long long count = 0;
    if(a==1)return 1;
    if(a<1000001 && cache[a]!=0) return cache[a];
    if(a%2==0) count = 1 + getNumber(a/2);
    else if (a%2==1) count = 1+getNumber(3*a+1);

    cache[a] = count;
    return count;
}

int main(){
    long long a,b=0;
    while(scanf("%lld%lld",&a,&b)!=EOF){
        int start = a<b? a:b;  //在input不會知道哪一個比大
        int end = a<b? b:a;
        long long max=0;
        for(start;start<=end;start++){
            int runTime = getNumber(start);
            max = (runTime>max)? runTime:max;
            //printf("%d %lld ",start,cache[start]);//這行是測試cache
        }
        //printf("%lld %lld %lld",a,b,max);//這行是實際要輸出的資料
    }
    return 0;
}