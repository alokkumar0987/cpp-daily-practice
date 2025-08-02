#include<iostream>
using namespace std;        
int main() {
   float x;
   cout << "Enter a number: ";
   cin >> x;
   int y = (int)x; // y=-1(for -1.5), y=0(for 0.5), y=1(for 1.5)
    cout << "Integer part: " << y << endl;
   if (y<0) y= y-1; // y=-2(for -1.5), y=0(for 0.5), y=1(for 1.5)
   float z = (float)y; // z=-2.0(for -1.5), z=0.0(for 0.5), z=1.0(for 1.5)
    x = x - z; // x=-0.5(for -1.5), x=0.5(for 0.5), x=0.5(for 1.5)
     cout << "The number is: " << x << endl;
 
  

    return 0;
}   