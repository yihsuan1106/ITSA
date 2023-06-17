#include <iostream>
#include <iomanip>


using namespace std;

int main() {
    int n;
    cin >> n;
    if((n/100)*(n/100)*(n/100)+((n%100)/10)*((n%100)/10)*((n%100)/10)+(n%10)*(n%10)*(n%10) == n) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
