#include <iostream>
#include <iomanip>


using namespace std;

int main() {
    int num;
    unsigned long long int ans = 1;
    cin >> num;
    while (num != 0) {
        ans *= num;
        num --;
    }
    cout << ans << "\n";
    return 0;
}
