#include <bits/stdc++.h>

using namespace std;

void input(int*,int);
void swap(int,int);
void BubbleSort(int* Arr, int);
void output(int*, int);

int main()
{
    int n;
    cout<<"Hay nhap so phan tu co trong mang: "; cin>>n;
    int* Arr = new int[n];
    input(Arr,n);
    cout<<"Mang vua nhap la: ";
    output(Arr,n);
    BubbleSort(Arr,n);
    cout<<"Mang vua duoc sap xep la: ";
    output(Arr,n);
    system("pause");
    delete [] Arr;
    return 0;
}

void input(int* Arr, int n)
{
    for(int i = 0 ; i < n;i++)
    {
        cout<<"Hay nhap phan tu thu "<<i; cin>>Arr[i];
    }
}

void output(int* Arr, int n)
{
    for(int i = 0 ; i<n;i++)
    {
        cout<<Arr[i]<<" ";
    }
}

void swap(int a,int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void BubbleSort(int* Arr, int n)
{
    int tmp;
    for(int i = 0 ; i <= n-1 ; i++)
    {
        for(int j=i+1 ; j <= n-1 ; j++)
        {
            if(Arr[j]<Arr[i])
            {
                tmp = Arr[j];
                Arr[j] = Arr[i];
                Arr[i] = tmp;
            }
        }
    }
}

