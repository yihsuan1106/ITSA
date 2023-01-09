//試撰寫一個程式，由輸入一個整數，然後判別此數是否為質數。質數是指除了 1 和它本身之外，沒有其它的數可以整除它的數，例如， 2, 3, 5, 7 與 11 等皆為質數。

//輸入說明 ：
//輸入一個正整數。

//輸出說明 ：
//質數顯示 YES ；非質數顯示 NO 。

#include <stdio.h>
#include <math.h>

int main(){
    int num;
    while(scanf("%d",&num)!=EOF){
        int a = 0;
        for(int i = 2;i < num;i++){
            if(num % i == 0) a=1;
        }
        if(a == 1 || num == 1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}
