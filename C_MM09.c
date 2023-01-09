//請撰寫一個程式，計算2的 ｉ次方的值。(提示：利用位移運算元)

//輸入說明 ：
//輸入一個正整數，i的值小於31。

//輸出說明 ：
//輸出 的ｉ次方的值。
//若 i > 31 輸出 "Value of more than 31"

#include <stdio.h>

int main() {
    int a;
    int b = 1;
    scanf("%d", &a);
    if(a > 31) printf("Value of more than 31\n");
    else{
        b = b << a;
        printf("%d\n",b);
    }
    return 0;
}
