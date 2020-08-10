#include <iostream>
#include <math.h>
using namespace std;

int main() {
  float a1,a2,a3,a4,a5,b1,b2,b3,b4,b5,a,i,c,g,e,j;
  double d,b,f,h,sum,sumi,sumj;
   cout<<"Enter the Coordinates "<< endl;
  cout<<"first vertex : "<< endl;
  cin>>a1>>b1;
  cout<<"second vertex : "<< endl;
  cin>>a2>>b2;
  cout<<"third Vertex : "<< endl;
  cin>>a3>>b3;
  cout<<"fourth vertex : "<< endl;
  cin>>a4>>b4;
  cout<<"To check coordinates :"<< endl;
  cin>>a5>>b5;
  c=(a5*(b1-b2))+ (a1*(b2-b5)) + (a2*(b5-b1));
  d= abs(0.5 * c);
  a=(a5*(b2-b3))+ (a2*(b3-b5)) + (a3*(b5-b2));
  b= abs(0.5 * a);
  e=(a5*(b3-b4))+ (a3*(b4-b5)) + (a4*(b5-b3));
  f= abs(0.5 * e);
  g=(a5*(b4-b1))+ (a4*(b1-b5)) + (a1*(b5-b4));
  h= abs(0.5 * g);
  i=(a1*(b2-b3))+ (a2*(b3-b1)) + (a3*(b1-b2));
  j=(a3*(b4-b1))+ (a4*(b1-b3)) + (a1*(b3-b4));
  sumi= abs(0.5 * i);
  sum= d+b+f+h;
  sumj= abs(0.5 * j);

  if (sum=sumi+sumj)
     {
       cout<<"The point lies inside the parallelogram "<< endl;
   }
   else
   {
     cout<<"The point lies outside "<< endl;
   }
  return 0;
}
