//試撰寫一程式，輸入 x 、 y 座標值，判斷該點位於那一個象限或是在座標軸上。舉例來說，若輸入的座標值為 (0,0) ，則優先輸出為Origin(原點)，
//若輸入的座標值為 (4,0)，則輸出即為x-axis(x 軸)；若輸入的座標值為 (3,-2) ，則輸出即為 4th Quadrant(第四象限)。

//輸入說明 ：
//座標x和y，中間以空格隔開，型態為整數。

//輸出說明 ：
//座標位置如1st Quadrant(第一象限)、2nd Quadrant(第二象限)、3rd Quadrant(第三象限)、4th Quadrant(第四象限)、Origin(原點)、x-(axisx 軸)或 y-axis(y 軸)。

#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if(x < 0 && y < 0)printf("3rd Quadrant\n");
    else if (x < 0 && y > 0)printf("2nd Quadrant\n");
    else if (x > 0 && y > 0)printf("1st Quadrant\n");
    else if (x > 0 && y < 0)printf("4th Quadrant\n");
    else if (x != 0 && y == 0)printf("x-axis\n");
    else if (x == 0 && y != 0)printf("y-axis\n");
    else if (x == 0 && y == 0)printf("Origin\n");
    return 0;
}
