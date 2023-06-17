#include <iostream>
#include <iomanip>


using namespace std;

int main() {
    int n;
    cin >> n;
    if(n <= 5 && 3 <= n) cout << "Spring\n";
    else if (n <= 8 && 6 <= n) cout << "Summer\n";
    else if (n <= 11 && 9 <= n) cout << "Autumn\n";
    else cout << "Winter\n";
    return 0;
}
