#include<iostream>
using namespace std;
int fact(int n) {
		int fact=1;
	for(int i=1;i<=n;i++) {
		fact=fact*i;
	}
	return fact;
}

int ncr(int n,int r) {
	int numirator=fact(n);
	int denominator=fact(r) * fact(n-r);
	return numirator/denominator;
}
int main() {
	int n;
	int r;
	cout<<"enter the value of n = ";
	cin>>n;
	cout<<"enter the value of r = ";
	cin>>r;
	cout<<ncr(n,r);
	return 0;
}
