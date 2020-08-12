#include<iostream>
using namespace std;
int main(){
	int n,m,a;
	cout<<"Enter m and n \n";
	cin>>m>>n;
	int p=1;
	int q=1;
	int b=(m-n)+1;
	for (int i=1;i<b;b--){
		p*=b;
	}
		for (int j=1; j<n; n--){
		q*=n;
	}
	if (m%n==0){
		a=2+(p/q);
	}
	else {
		a=p+1;
	}
	cout<<a;
	return 0;
}
		
