#include <iostream>
#include <math.h>

using namespace std;

int main() {
  float x1,x2,x3,y1,y2,y3,s,Area ;
  cout<<"Enter First point Co-ordinate " <<endl;
  cin>>x1>>y1;
  cout<<"Enter second point Co-ordinates " << endl;
  cin>>x2>>y2;
  cout<<"Enter third point Co-ordinates " << endl;
  cin>>x3>>y3;
  s =((x1*(y2-y3))+ (x2*(y3-y1)) + (x3*(y1-y2)));
 Area = (s*0.5);
  cout<<"The Area of Triangle "<<abs(Area);
  return 0;
}
