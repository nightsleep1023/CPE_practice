#include<stdio.h>
#include<string.h>

int main(){
    char line[105][105] = {0};
    int row= 0;
    int maxlen = 0;
    printf("%d",line[0][0]);
    while(fgets(line[row],105,stdin)!=NULL){
        int linelen = strlen(line[row]);
        
        if(line[row][linelen-1] == '\n'){
            line[row][linelen-1] = '\0';
            linelen--;
        }
        if(linelen>maxlen)maxlen = linelen;
        row++;
    }
    
    for(int j = 0;j<maxlen;j++){

        for(int i = row-1 ; i>=0 ; i--){

            if(j < strlen(line[i])){
                printf("%c",line[i][j]);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*本地測試：必須手動輸入 Ctrl+Z 或 Ctrl+D 來模擬資料結束。

CPE 考試：系統會自動把測試檔餵進去，讀完最後一個字後 fgets 會抓到 EOF 並回傳 NULL，你的迴圈會正常結束。

陷阱：要注意 maxlen 的計算必須精確，且每一行的結尾換行符號要處理乾淨。 */