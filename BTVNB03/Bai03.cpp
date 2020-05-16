#include <iostream>

using namespace std;

void nhap_n_m(int &n, int &m)
{
    do
    {
        cout<<"nhap n: ";
        cin>>n;
        if(n<2 || n>6) cout<<"nhap lai n thuoc doan [2..6]"<<endl;
    } while(n<2 || n>6);

    do
    {
        cout<<"nhap m: ";
        cin>>m;
        if (m<2 || m> 6) cout<<"nhap lai m thuoc doan [2..6]"<<endl;
    }while(m<2 || m>6);
}
void nhap_mang(int a[][6], int m, int n,char x)
{
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            cout<<"nhap "<<x<<"["<<i<<"]"<<"["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
}
void xuat_mang(int a[][6], int n, int m)
{
    for(int i=0; i<n;++i)
    {
        cout<<endl;
        for(int j=0; j<m; ++j)
        {
            cout<<"\t"<<a[i][j];
        }
    }
}

void ma_tran_tong_hieu(int a[][6], int b[][6], int c[][6],int d[][6],int n, int m)
{
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            c[i][j] = a[i][j] + b[i][j];
            d[i][j] = a[i][j] - b[i][j];
        }
    }
}
int tinh_tong(int a[][6], int hang,int m)
{
    int tong=0;
    for(int i=0; i<m; ++i)
    {
        tong+=a[hang][i];
    }
    return tong;
}
void hang_tong_max(int c[][6], int n, int m)
{
    int max = tinh_tong(c,0,m);
	for(int i = 1; i < n; i++)
	{
		if(max >tinh_tong(c,i,m))
        {
            max = tinh_tong(c,i,m);
        }
	}
	for(int i = 0; i <n; i++)
	{
		if(max == tinh_tong(c,i,m))
		{
			cout<<"\ndong "<< i << " co tong cac phan lon nhat la: "<<max<<endl;
		}
	}
}
int tinh_tich(int a[][6], int n,int cot)
{
    int tich=1;
    for(int i=0; i<n; i++)
    {
        tich*=a[i][cot];
    } return tich;
}
void cot_tich_min(int d[][6], int n, int m)
{
    int min = tinh_tich(d,n,0);
    for(int j=1; j<n; j++)
    {
        if (min < tinh_tich(d,n,j))
        {
            min = tinh_tich(d,n,j);
        }
    }
    for(int j=0; j<m; ++j)
    {
        if (min == tinh_tich(d,n,j))
        {
            cout<<"\ncot "<< j << " co tich nho nhat = "<< min<<endl;
        }
    }
}
int main()
{
    int n,m,a[6][6],b[6][6],c[6][6],d[6][6];
    nhap_n_m(n,m);
    nhap_mang(a,n,m,'a');
    xuat_mang(a,n,m);
    cout<<endl;
    nhap_mang(b,n,m,'b');
    xuat_mang(b,n,m);
    ma_tran_tong_hieu(a,b,c,d,n,m);
    cout<<"\nMa tran C: "<<endl;
    xuat_mang(c,n,m);
    cout<<"\nMa tran D: "<<endl;
    xuat_mang(d,n,m);
    hang_tong_max(c,n,m);
    cot_tich_min(d,n,m);
    return 0;
}
