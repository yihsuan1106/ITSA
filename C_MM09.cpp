#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    unsigned long long int up, down = 1, high;
    cin >> up;
    if(up > 31) cout << "Value of more than 31\n";
    else{
        for(int i = 0 ;i < up; i++) down *= 2;
        cout << down << "\n";
    }
    return 0;
}
