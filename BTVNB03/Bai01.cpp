#include <iostream>

using namespace std;

void Nhap(int &a)
{
    do
    {

        cin>>a;

        if(a<0 || a>= 1000)
        {
            cout<<"Nhap lai!!";
        }
    }
    while(a<0 || a>= 100);

}
void ThucHien(int &a, int &b)
{
      a = a+ b;
      b = a-2*b;
  

}

int main()
{
    int a, b;
   do{
   	cout<<"Nhap a:";
		Nhap(a);
	cout<<"Nhap b:";
		Nhap(b);
	}while(a<b);
    ThucHien(a,b);
    cout<<"a= "<<a<<" b= "<<b;
    return 0;
}
