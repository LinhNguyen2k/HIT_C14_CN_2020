#include <iostream>
using namespace std;
// a)
int dem(int n){
	if (n<10){//so 1 chu so
		return 1;
	}
	return 1 + dem(n/10);
}//end a

//b)
long long F(int n){
	if (n == 0)
		return 1;
	return 2*n*F(n-1);
}//end b

// c)
void binary(int n){
	if (n!=0){
		binary(n/2);	
		cout<<n%2;
	}
	return;
}//end c
int main(){
	int n;
	do{
		cout<<"nhap n nguyen duong: ";cin>>n;
		if (n<=0) cout<<"nhap lai"<<endl;
	}while(n<=0);
	cout<<n<<" co "<<dem(n)<<" chu so"<<endl;
	cout<<"F("<<n<<") = "<<F(n)<<endl;
	cout<<n<<" to binary: ";
	binary(n);
	return 0;
}

