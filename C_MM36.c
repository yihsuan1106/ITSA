//試撰寫一程式，可輸入月份，然後判斷其所屬的季節（ 3~5 月為春季，6~8 月為夏季， 9~11 月為秋季， 12~2 月為冬季）。

//輸入說明 ：
//輸入月份。

//輸出說明 ：
//輸出該月份的季節， 3~5 月為春季(Spring)， 6~8 月為夏季(Summer)， 9~11 月為秋季(Autumn)， 12~2 月為冬季(Winter)。

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n <= 5 && 3 <= n)printf("Spring\n");
    else if (n <= 8 && 6 <= n)printf("Summer\n");
    else if (n <= 11 && 9 <= n)printf("Autumn\n");
    else printf("Winter\n");
    return 0;
}
