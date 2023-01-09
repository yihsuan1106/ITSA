//請以JAVA運算式計算下面三角形面積，並輸出面積結果。

//輸入說明 ：
//每一組需輸入兩正整數，分別代表三角形的底及高。

//輸出說明 ：
//輸出三角形面積。
#include <stdio.h>

int main() {
    int down, tall;
    scanf("%d %d", &down, &tall);
    printf("%.1f\n", down*tall/2.0);
    return 0;
}
