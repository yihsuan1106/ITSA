#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        if(b == 1) cout << fixed << setprecision(1) << ((float)a - 80)*0.7 << "\n";
        else cout << fixed << setprecision(1) << ((float)a - 70)*0.6 << "\n";
    }
    return 0;
}

