#include <iostream>
using namespace std;

int fibo(int x){
	if (x<=0 || x<=1)
		return x;
	else
		return fibo(x-1)+fibo(x-2);
}

int main(){
	int n;
	cout<<"batas fibonacci :"; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"f"<<i<<"="<<fibo(i)<<endl;
	}
}
