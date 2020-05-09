#include <iostream>
using namespace std;
bool snt(int n){
	if(n<2)
		return false;
	for(int i=2;i*i<=n;i++){//kiem tra tu 2-> sqrt(n)
		if (n%i == 0)
			return false;
	}
	return true;
}
void phan_tich(int n){
	cout<<n<<" = ";
	int i = 2;
	while(n>1){
		while(n%i==0){
		//neu n chia het cho i thi ta se giam n di i lan va in ra
			n/=i;
			if (n>1) cout<<i<<"*";
			else cout<<i;
		}
		i++;
	}
}
int main(){
	int n;
	do{
		cout<<"nhap n >10: ";cin>>n;
		if (n<=10) cout<<"nhap lai"<<endl;
	}while(n<=10);
	if (snt(n)){
		cout<<n<<" la so nguyen to";
	}else{
		phan_tich(n);
	}
	return 0;
}

