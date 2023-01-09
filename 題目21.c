//寫一個程式來找出輸入的十個數字的最大值和最小值，數值不限定為整數，且值可存放於 float 型態數值內。

//輸入說明 ：
//輸入十個數字，以空白間隔。

//輸出說明 ：
//輸出數列中的最大值與最小值，輸出時需附上小數點後兩位數字。

#include <stdio.h>
#include <math.h>

int main(){
    float a, max, min;
    scanf("%f",&a);
    max = min = a;
    for(int i = 0;i < 9;i++){
        scanf("%f",&a);
        if(a > max) max = a;
        if(a < min) min = a;
    }
    printf("maximum:%.2f\nminimum:%.2f\n",max,min);
    return 0;
}

