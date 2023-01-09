//請撰寫一個程式，依據代表攝氏溫度的變數ｃ的值，顯示華氏溫度(已知攝氏溫度等於華氏溫度減32度再乘上5/9)。

//輸入說明 ：
//輸入攝氏溫度(數值不一定都是整數)。

//輸出說明 ：
//輸出華氏溫度(四捨五入取至小數點第一位，整數需補零)。

#include <stdio.h>

int main() {
    int sum, ten = 0, five = 0, one = 0;
    scanf("%d", &sum);
    while (sum != 0) {
        if(sum >= 10){
            sum -= 10;
            ten ++;
        }
        else if (sum >= 5){
            sum -= 5;
            five ++;
        }
        else if (sum >= 1){
            sum -= 1;
            one ++;
        }
    }
    printf("NT10=%d\nNT5=%d\nNT1=%d\n",ten, five, one);
    return 0;
}
