//有一種仿間常見的遊戲稱為 "18 啦 "~ 玩法介紹 : 由四個骰子來擲，只要其中任兩個是相同點，才開始計算點數，點數即為另兩個點數相加，若另兩個也一樣，則取較大的一組相加，另外有下列幾種特殊情況 :
//1. 擲出 4 顆骰子點數均相同，稱為通殺 !
//2. 任三顆點數相同或四顆點數均不相同，即為無意義 !
//請寫一程式，各別輸入四顆骰子點數，判斷結果 !

//輸入說明 ：
//各別輸入四次骰出的點數 ，一行輸入一次，輸入的點數為 1~6 之間 。

//輸出說明 ：
//若是通殺，則顯示大寫英文字母 WIN ， 若是無意義 ，則 顯示大寫英文字母 R ，若可計算點數，則顯示最後點數 。 輸出結果前後均不需留空格 。

#include <stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    if(a == b && b == c && c == d) printf("WIN\n");
    else if (a == b && b == c && c != d) printf("R\n");
    else if (a != b && b == c && c == d) printf("R\n");
    else if (a != b && a == c && c == d) printf("R\n");
    else if (a == b && b != c && b == d) printf("R\n");
    else if (a != b && b != c && c != d && a != c && a != d && b != d) printf("R\n");
    else if (a == b && c == d){
        if(a+b > c+d) printf("%d\n", a+b);
        else printf("%d\n", c+d);
    }
    else if (a == d && c == b){
        if(a+d > c+b) printf("%d\n", a+d);
        else printf("%d\n", c+b);
    }
    else if (a == c && b == d){
        if(a+c > b+d) printf("%d\n", a+c);
        else printf("%d\n", b+d);
    }
    else if (a == b){
        printf("%d\n", c+d);
    }
    else if (a == c){
        printf("%d\n", b+d);
    }
    else if (a == d){
        printf("%d\n", c+b);
    }
    else if (d == b){
        printf("%d\n", c+a);
    }
    else if (c == b){
        printf("%d\n", a+d);
    }
    else if (c == d){
        printf("%d\n", a+b);
    }
    return 0;
}

