#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    int a;
    while(cin >> a){
        if(a % 400 == 0) cout << "Bissextile Year\n";
        else if(a % 100 == 0) cout << "Common Year\n";
        else if(a % 4 == 0) cout <<"Bissextile Year\n";
        else cout << "Common Year\n";
    }
    return 0;
}
