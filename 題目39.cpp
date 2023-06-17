#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    int n, a, b, c;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if(a >= 60 && b >= 60 && c >= 60) cout << "P\n";
        else if (a < 60 && b >= 60 && c >= 60 && (a+b+c) >= 220) cout << "P\n";
        else if (a < 60 && b >= 60 && c >= 60 && (a+b+c) < 220) cout << "M\n";
        else if (a >= 60 && b < 60 && c >= 60 && (a+b+c) >= 220) cout << "P\n";
        else if (a >= 60 && b < 60 && c >= 60 && (a+b+c) < 220) cout << "M\n";
        else if (a >= 60 && b >= 60 && c < 60 && (a+b+c) >= 220) cout << "P\n";
        else if (a >= 60 && b >= 60 && c < 60 && (a+b+c) < 220) cout <<"M\n";
        else if (a >= 80 && b < 60 && c < 60) cout << "M\n";
        else if (a < 60 && b >= 80 && c < 60) cout << "M\n";
        else if (a < 60 && b < 60 && c >= 80) cout << "M\n";
        else cout << "F\n";
    }
    return 0;
}

