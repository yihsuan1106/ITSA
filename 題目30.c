//某間學校舉辦英文檢定測驗，若是學生通過該測驗，則能通過畢業門檻。老師準備的英文測驗中分為三個項目當作考試，分別是聽力、閱讀、口說。每一個項目測驗滿分皆為 100 分，總分為 300 分。想要通過測驗有兩種方式。方式一：若是三個項目分數皆為 60 分以上 ( 包含 60 分 ) 即為通過測驗。方式二：若三個項目中有其中一個項目分數未滿 60 分，但三個項目分數總合超過 220 分，也可算通過測驗。若三個項目中有其中一個項目分數未滿 60 分，而三個項目分數總合也沒能超過 220 分，可獲得補考機會。若是三個項目中有兩個項目不及格，但另一個項目成績高於 80 分 ( 包含 80 分 ) ，也可獲得補考的機會。其餘皆判定為無法通過測驗。

//輸入說明 ：
//第一行為一個整數 N ，代表共有 N 組測試資料。之後有 N 行，每一行有 3 個非負整數 ( 範圍皆為 0 到 100), 分別代表該名學生聽力、閱讀、口說的測驗分數

//輸出說明 ：
//若是通過測驗，則輸出 ”P” 。若是需要補考，則輸出 ”M” 。若是無法通過測驗，則輸出 ”F” 。 每組答案結果輸出於一行。

#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a == 1 && b >= 21) printf("Aquarius\n");
    if(a == 2 && b <= 18) printf("Aquarius\n");
    if(a == 2 && b >= 19) printf("Pisces\n");
    if(a == 3 && b <= 20) printf("Pisces\n");
    if(a == 3 && b >= 21) printf("Aries\n");
    if(a == 4 && b <= 20) printf("Aries\n");
    if(a == 4 && b >= 21) printf("Taurus\n");
    if(a == 5 && b <= 21) printf("Taurus\n");
    if(a == 5 && b >= 22) printf("Gemini\n");
    if(a == 6 && b <= 21) printf("Gemini\n");
    if(a == 6 && b >= 22) printf("Cancer\n");
    if(a == 7 && b <= 22) printf("Cancer\n");
    if(a == 7 && b >= 23) printf("Leo\n");
    if(a == 8 && b <= 23) printf("Leo\n");
    if(a == 8 && b >= 24) printf("Virgo\n");
    if(a == 9 && b <= 23) printf("Virgo\n");
    if(a == 9 && b >= 24) printf("Libra\n");
    if(a == 10 && b <= 23) printf("Libra\n");
    if(a == 10 && b >= 24) printf("Scorpio\n");
    if(a == 11 && b <= 22) printf("Scorpio\n");
    if(a == 11 && b >= 23) printf("Sagittarius\n");
    if(a == 12 && b <= 21) printf("Sagittarius\n");
    if(a == 12 && b >= 22) printf("Capricorn\n");
    if(a == 1 && b <= 20) printf("Capricorn\n");
    return 0;
}
