#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(a == 1 && b >= 21) cout << "Aquarius\n";
    if(a == 2 && b <= 18) cout << "Aquarius\n";
    if(a == 2 && b >= 19) cout << "Pisces\n";
    if(a == 3 && b <= 20) cout << "Pisces\n";
    if(a == 3 && b >= 21) cout << "Aries\n";
    if(a == 4 && b <= 20) cout << "Aries\n";
    if(a == 4 && b >= 21) cout << "Taurus\n";
    if(a == 5 && b <= 21) cout << "Taurus\n";
    if(a == 5 && b >= 22) cout << "Gemini\n";
    if(a == 6 && b <= 21) cout << "Gemini\n";
    if(a == 6 && b >= 22) cout << "Cancer\n";
    if(a == 7 && b <= 22) cout << "Cancer\n";
    if(a == 7 && b >= 23) cout << "Leo\n";
    if(a == 8 && b <= 23) cout << "Leo\n";
    if(a == 8 && b >= 24) cout << "Virgo\n";
    if(a == 9 && b <= 23) cout << "Virgo\n";
    if(a == 9 && b >= 24) cout << "Libra\n";
    if(a == 10 && b <= 23) cout << "Libra\n";
    if(a == 10 && b >= 24) cout << "Scorpio\n";
    if(a == 11 && b <= 22) cout << "Scorpio\n";
    if(a == 11 && b >= 23) cout << "Sagittarius\n";
    if(a == 12 && b <= 21) cout << "Sagittarius\n";
    if(a == 12 && b >= 22) cout << "Capricorn\n";
    if(a == 1 && b <= 20) cout << "Capricorn\n";
    return 0;
}

