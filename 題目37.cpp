#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    if(a == b && b == c && c == d) cout << "WIN\n";
    else if (a == b && b == c && c != d) cout << "R\n";
    else if (a != b && b == c && c == d) cout << "R\n";
    else if (a != b && a == c && c == d) cout << "R\n";
    else if (a == b && b != c && b == d) cout << "R\n";
    else if (a != b && b != c && c != d && a != c && a != d && b != d) cout << "R\n";
    else if (a == b && c == d){
        if(a+b > c+d) cout << a+b << "\n";
        else cout << c+d << "\n";
    }
    else if (a == d && c == b){
        if(a+d > c+b) cout << a+d << "\n";
        else cout << c+b << "\n";
    }
    else if (a == c && b == d){
        if(a+c > b+d) cout << a+c << "\n";
        else cout << d+b << "\n";
    }
    else if (a == b){
        cout << c+d << "\n";
    }
    else if (a == c){
        cout << d+b << "\n";
    }
    else if (a == d){
        cout << c+b << "\n";
    }
    else if (d == b){
        cout << a+c << "\n";
    }
    else if (c == b){
        cout << a+d << "\n";
    }
    else if (c == d){
        cout << a+b << "\n";
    }
    return 0;
}


