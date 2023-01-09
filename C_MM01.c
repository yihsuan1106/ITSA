//請以 JAVA 運算式計算下面梯形面積，並輸出面積結果。

//輸入說明 ：
//每一組依序分別輸入梯形的上底、下底及高的整數。

//輸出說明 ：
//輸出梯形面積。

#include <stdio.h>

int main() {
    int up, down, tall;
    scanf("%d %d %d", &up, &down, &tall);
    printf("Trapezoid area:%.1f\n", (up+down)*tall/2.0);
    return 0;
}
