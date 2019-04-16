#include <iostream>
using namespace std;

int main(){
	int temp;
	int batas;
	int acak[5] = {3,1,7,4,2};
	
	for(int i=0; i<4; i++){
		batas = i+1;
		while(batas>0){
			if(acak[batas] < acak[batas-1]){
			temp = acak[batas];
			acak[batas] = acak[batas-1];
			acak[batas-1] = temp;
			}
			batas--;	
		}		
	}
	for (int i=0; i<5; i++){
		cout<<acak[i];
	}
}
