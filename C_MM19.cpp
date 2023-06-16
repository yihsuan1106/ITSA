#include <iostream>
#include <iomanip>


using namespace std;

int main() {
    int num;
    double one = 0.9, c1 = 0.9, c2 = 0.79;
    cin >> num;
    if(num <= 800) cout << fixed << setprecision(1) << num*one << "\n";
    else if (800 < num && num < 1500) cout << fixed << setprecision(1) << num*one*c1 << "\n";
    else cout << fixed << setprecision(1) << num*one*c2 << "\n";
    return 0;
}
