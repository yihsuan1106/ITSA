//試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。

//輸入說明 ：
//輸入一個正整數。

//輸出說明 ：
//輸出總和。

#include <stdio.h>
#include <math.h>

int main(){
    int num;
    while(scanf("%d",&num)!=EOF){
        int a = 0;
        for(int i = 1;i <= num;i++){
            if(i % 3 == 0) a+=i;
        }
        printf("%d\n",a);
    }
    return 0;
}

