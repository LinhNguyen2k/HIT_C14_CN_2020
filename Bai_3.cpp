#include <iostream>
using namespace std;
int nhap(){
	int x;
	do{
		cout<<"nhap so nguyen duong: ";cin>>x;
		if(x<=0) cout<<"nhap lai"<<endl;
	}while(x<=0);
}
//C1,C2: Eclid
//C1:
int UCLN(int a, int b){
	int r = a %b; // so du
	while(r!=0){
		a = b;
		b = r;
		r = a %b;
	}
	//du = 0 -> a % b  == 0 -> b la UCLN
	return b;
}

//C2:
//int UCLN(int a, int b){
//	if (a % b == 0)
//		return b;
//	return UCLN(b,a%b);
//}

//C3:
//int UCLN(int a, int b){
//	if (a==b)
//		return a; // return b;
//	if (a>b)
//		return UCLN(a-b,b);
//	else
//		return UCLN(a,b-a);
//}
int main(){
	int tu_so,mau_so;
	tu_so = nhap();
	mau_so = nhap();
	int ucln = UCLN(tu_so, mau_so);
	tu_so /= ucln;
	mau_so /= ucln;
	cout<<"Phan so sau khi toi gian: "<<tu_so<<"/"<<mau_so;
	return 0;
}

