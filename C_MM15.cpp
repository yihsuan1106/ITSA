#include <iostream>
#include <iomanip>


using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if(x <= 100 &&x >= 0 && y<= 100 && y >= 0) cout << "inside\n";
    else cout << "outside\n";
    return 0;
}
