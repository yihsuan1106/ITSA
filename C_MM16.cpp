#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        if(a*a+b*b>10000){
            cout << "outside\n";
        }
        else{
            cout << "inside\n";
        }
    }
    return 0;
}
