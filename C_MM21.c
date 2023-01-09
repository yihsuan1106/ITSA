//算階乘

//輸入說明 ：
//輸入一個整數 n，0 < n < 20

//輸出說明 ：
//輸出答案
#include <stdio.h>

int main() {
    int num;
    unsigned long long int ans = 1;
    scanf("%d", &num);
    while (num != 0) {
        ans *= num;
        num --;
    }
    printf("%llu\n", ans);
    return 0;
}
