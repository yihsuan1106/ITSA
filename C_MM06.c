//試撰寫一程式，可由鍵盤輸入英哩，程式的輸出為公里，其轉換公式如下：
//1 英哩= 1.6 公里

//輸入說明 ：
//輸入欲轉換之英哩數(int)。

//輸出說明 ：
//輸出公里(double)，四捨五入取到小數點以下第一位。
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("%.1f\n", num*1.6);
    return 0;
}
