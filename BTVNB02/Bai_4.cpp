#include <iostream>
using namespace std;
void hinh_thoi(int n){
	//nua tren
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++)
			cout<<" ";
		for(int j=1;j<=2*i-1;j++)
			cout<<"*";
		cout<<endl;
	}
	//nua duoi
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=i;j++)
			cout<<" ";
		for(int j=1;j<=2*n-1-2*i;j++)
			cout<<"*";
		cout<<endl;
	}
}
int main(){
	int n;
	do{
		cout<<"Nhap n > 0: ";cin>>n;
		if (n<=0) cout<<"nhap lai"<<endl;
	}while(n<=0);
	hinh_thoi(n);
	return 0;
}

