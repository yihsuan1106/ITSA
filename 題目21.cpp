#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    float a, max, min;
    cin >> a;
    max = min = a;
    for(int i = 0;i < 9;i++){
        cin >> a;
        if(a > max) max = a;
        if(a < min) min = a;
    }
    cout << "maximum:" << fixed << setprecision(2) << max << "\nminimum:" << min << "\n";
    return 0;
}
