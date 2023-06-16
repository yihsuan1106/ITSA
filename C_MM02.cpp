#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  float up, down, high;
  cin >> up >> high;
  cout << fixed << setprecision(1) << (up)*high/2 << "\n";
  return 0;
}
