#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    int h1, m1, h2, m2, sum_m, total = 0;
    cin >> h1 >> m1;
    cin >> h2 >> m2;
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
    cout << total << "\n";
    return 0;
}
