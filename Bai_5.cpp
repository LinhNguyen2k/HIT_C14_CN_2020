#include <iostream>
#include <math.h>
using namespace std;
/*
	Moi nguoi doc qua bai viet nay:
https://viblo.asia/p/so-chu-so-0-lien-tiep-cuoi-cung-cua-n-4P856XOGZY3
*/

//C1:
int count(long long n){
	int i = 5,result = 0,j;
	while(i<=n){		
		j = i;
		while (j %5 == 0){
			j/=5;
			result++;
		}
		i+=5;
	}
	return result;
}
//C2:
int count1(long long n){
	int k = 1, result = 0;
	while(pow(5,k) <= n){
		result += n/pow(5,k);
		k++;
	}
	return result;
}
int main(){
	long long  n;
	do{
		cout<<"nhap n: ";cin>>n;
		if (n<2 || n> pow(10,12)) cout<<"nhap lai"<<endl;
	}while(n<2 || n> pow(10,12));
	cout<<n<<"! co "<<count(n)<<" chu so 0 tan cung";
	return 0;
}

