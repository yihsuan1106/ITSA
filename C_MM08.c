//請撰寫一個程式，可計算兩數和的平方值。

//輸入說明 ：
//輸入兩個數字。

//輸出說明 ：
//輸出和的平方值。
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", (a+b)*(a+b));
    return 0;
}
