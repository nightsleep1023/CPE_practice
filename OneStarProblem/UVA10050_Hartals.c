#include<stdio.h>
#include<stdbool.h>

int main(){

    int t=0;  //幾組測資
    int day=0;//總天數
    int p=0;  //政黨總數
    
    int pNoWork[101]={0};
    scanf("%d",&t);

    for(int a=0;a<t;a++){
        int lostday=0;    //注意:變數重製
        scanf("%d",&day);
        scanf("%d",&p);
        for(int b=0;b<p;b++){   //紀錄每一個政黨罷工的週期
            scanf("%d",&pNoWork[b]);  //注意:陣列再輸入要加入&
        }
        for(int dday=1;dday<=day;dday++){   //開始計算罷工 注意:開始日期與結束日期
            if(dday%7==6 || dday%7==0){    //要跳過禮拜五跟禮拜六，每周都是從禮拜天開始，禮拜六結束
                continue;
            }
            bool isStrike = false;
            for(int i=0;i<p;i++){     //去尋找所有政黨是否罷工
                if( dday % pNoWork[i] == 0){
                    isStrike = true;
                }
            }
            if(isStrike){
                lostday++;
            }

        }

        printf(" 1 %d\n",lostday);

    }
    return 0;
}