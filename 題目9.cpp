#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    int num;
    while(cin >> num){
        int a = 0;
        for(int i = 1;i <= num;i++){
            if(i % 3 == 0) a+=i;
        }
        cout << a << "\n";
    }
    return 0;
}
