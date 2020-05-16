#include <string.h>
#include <stdio.h>
#include<string>
#include <iostream>
using namespace std;


void XoaktDauvsCuoi(string &str)
{
    while(str[0]==32 && str.length()>0) // xoa khoang tang dau
    {
        str.erase(0,1);
    }
  while(str[str.length()-1] == 32 && str.length()>0)// xoa khoang trang cuoi
		str.erase(str.length()-1,1);

}
void xoakt(string &str)
{
    int n = str.length();
    for(int i=0; i<n; i++)
    {
        if(str[i]== ' ' && str[i+1]== ' ')
        {
            str.erase( i,  1);
            i--;
        }
    }
}
void demTu(string str)
{
    int n = str.length(),dem=0;
    for(int i=0; i<n; i++)
    {
        if(str[i] == ' ')
        {
             dem++;

        }

    }
    cout<<"Chuoi co "<< dem+1<<" tu"<<endl;
}
void demKiTu(string str)
{
	int i,count[256]={};
	for(i=0;i<str.length();i++)
		count[(int)str[i]-32]++;
	for(i=1;i<256;i++)
	if(count[i]!=0)
	cout << "\nKi tu "<<(char)(i+32)<<" la "<<count[i];
	cout << "\nKi tu space la "<<count[0];
}
int main()
{
    string str;
    cout<<"\tNhap chuoi:";
    getline(cin,str);
    cout<<"\nChuoi vua nhap: ";
    cout<<str;
    cout<<"\nKhong con dau cach hai dau:";
    XoaktDauvsCuoi(str);
    cout<<str;
    cout<<"\nGiua hai tu chi cach nhau mot khoang trang:";
    xoakt(str);
    cout<<str;
    cout<<endl;
    demTu(str);
    cout<<"\nDem ki tu"<<endl;
    demKiTu(str);
    return 0;
}
