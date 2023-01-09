//已知男生標準體重＝(身高－80 )*0.7；女生標準體重＝(身高－70)*0.6；試寫一個程式可以計算男生女生的標準體重。

//輸入說明 ：
//每個測資檔案會有多組測資案例。輸入兩個數值，依序代表為身高及性別（1代表男性；2代表女性）。

//輸出說明 ：
//輸出標準體重，浮點數取至第一位。

#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    while(scanf("%d",&a)!=EOF){
        scanf("%d",&b);
        if(b == 1) printf("%.1f\n",((float)a - 80)*0.7);
        else printf("%.1f\n",((float)a - 70)*0.6);
    }
    return 0;
}

