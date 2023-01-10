//假設某個停車場的費率是停車2小時以內，每半小時30元，超過2小時，但未滿4小時的部份，每半小時40元，超過4小時以上的部份，每半小時60元，未滿半小時部分不計費，停車不能超過當天晚上12點。

//輸入說明 ：
//輸入包含兩行數字，第一行為開始停車時間，第二行為結束停車時間，每一行包含兩個正整數hour、minute。

//輸出說明 ：
//輸出停車費。

#include <stdio.h>

int main(){
    int h1, m1, h2, m2, sum_m, total = 0;
    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);
    sum_m = (h2 - h1)*60 + (m2 - m1);
    while (sum_m > 270) {
        sum_m -= 30;
        total += 60;
    }
    while (sum_m > 150) {
        sum_m -= 30;
        total += 40;
    }
    while (sum_m >= 30) {
        sum_m -= 30;
        total += 30;
    }
    printf("%d\n", total);
    return 0;
}

