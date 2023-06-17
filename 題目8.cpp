#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    int num;
    while(cin >> num){
        int a = 0;
        for(int i = 2;i < num;i++){
            if(num % i == 0) a=1;
        }
        if(a == 1 || num == 1){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}
