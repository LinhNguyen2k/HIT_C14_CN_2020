#include <iostream>

using namespace std;
void Nhap(int a[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
void Xuat(int a[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]="<<a[i]<<endl;
    }
}
void fuction1(int a[] , int n)
{
    int max1 =a[0], min1=a[0],sum=0;
    float F =0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    for(int i=1;i<n;i++)
    {
        if(a[i] > max1)
            max1 = a[i];
    }
    for(int i=1;i<n;i++)
    {
        if(a[i] < min1)
            min1 = a[i];
    }
    if(max1 !=0 && min1 !=0)
    {
         F = (sum*min1)*1.0/(max1);
    }
    else
        F = sum;
    cout<<"\tGia tri cua F="<<F;
}
void function2(int a[] , int n)
{
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            a[i] = a[i] *(-1);
        }
        else
        {
            a[i]*=2;
        }
    }
    cout<<"======Mang sau khi insert======"<<endl;
    Xuat(a,n);
}
void Sort(int a[] , int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] <a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"=====Mang sau khi sort======="<<endl;
    Xuat(a,n);
}

int main()
{
    int a[100],n;
    cout<<"Nhap n:";
    cin>>n;
    Nhap(a,n);
    cout<<endl;
    fuction1(a,n);
    cout<<endl;
    function2(a,n);
    cout<<endl;
    Sort(a,n);
    return 0;
}
