//有一正方形，長、寬均為100，且起始座標為(0,0)。請寫一支程式可以輸入「點」的座標，並判斷「點」是否在正方形的範圍內。如果「點」的位置剛好在邊界的話也算是在正方形範圍內(例：x=100，y=10)。

//輸入說明 ：
//每一組輸入有兩正整數字，分別代表X與Y座標。

//輸出說明 ：
//輸出此點座標在正方形範圍內或外。

#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if(x <= 100 &&x >= 0 && y<= 100 && y >= 0)printf("inside\n");
    else printf("outside\n");
    return 0;
}
