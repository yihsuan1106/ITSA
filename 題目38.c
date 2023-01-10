//輸入所使用的度數，換算夏月及非夏月之電費金額

//輸入說明 ：
//一個度數 ( 正整數 )

//輸出說明 ：
//夏月與非夏月的金額，請輸出至小數點後兩位

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n <= 120){
        printf("Summer months:%.2f\n", n*2.1);
        printf("Non-Summer months:%.2f\n", n*2.1);
    }
    else if (n <=330){
        printf("Summer months:%.2f\n", n*3.02);
        printf("Non-Summer months:%.2f\n", n*2.68);
    }
    else if (n <=500){
        printf("Summer months:%.2f\n", n*4.39);
        printf("Non-Summer months:%.2f\n", n*3.61);
    }
    else if (n <=700){
        printf("Summer months:%.2f\n", n*4.97);
        printf("Non-Summer months:%.2f\n", n*4.01);
    }
    else{
        printf("Summer months:%.2f\n", n*5.63);
        printf("Non-Summer months:%.2f\n", n*4.5);
    }
    return 0;
}

