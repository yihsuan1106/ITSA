#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int up, down = 1, high;
    cin >> up;
    cout << "NT10="<< up/10 << "\n" << "NT5=" << (up%10)/5 << "\n" << "NT1=" << (up%10)%5 << "\n";
    return 0;
}
