#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  float up, down, high;
  cin >> up >> down >> high;
  cout << "Trapezoid area:" <<  fixed  <<  setprecision(1) << (up+down)*high/2 << "\n";
  return 0;
}
