//請寫一個程式，讀入兩個數字，並求出它們的和。

//輸入說明 ：
//輸入有多組測資，每一列為一組測資，每組輸入有兩個整數(int)。

//輸出說明 ：
//輸出該兩整數的和(int)，每一列為一組輸出結果。
#include <stdio.h>

int main() {
    int down, tall;
    while(scanf("%d %d", &down, &tall) != EOF){
        printf("%d\n", down+tall);
    }
    return 0;
}
