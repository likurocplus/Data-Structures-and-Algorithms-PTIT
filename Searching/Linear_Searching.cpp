#include <bits/stdc++.h>

using namespace std;

int linear_Searching(int* , int , int);
void input_Arr(int *, int );

int main()
{
    cout<<"Hay nhap gia tri cua n: ";
    int n;
    cin>>n;
    int *a = new int[n];
    input_Arr(a,n);
    cout<<"Hay nhap gia tri muon tim kiem: ";
    int x; cin>>x;
    cout<<linear_Searching(a,x,n);
    delete [] a;
}

int linear_Searching(int* a, int x , int n)
{
    int i=0;
    while( a[i] != x && i<=n-1)
    {
        i++;
    }
    if (i<=n-1)
    {
        return i;
    }
    else
    {
        return -1;
    }
}

void input_Arr(int *a, int n)
{
    int i=0;
    while (i<=n-1)
    {
        cout<<"Hay nhap gia tri "<<i+1<<" :";
        cin>>a[i];
        i++;
    }
}