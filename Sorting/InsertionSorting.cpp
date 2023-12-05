#include <bits/stdc++.h>

using namespace std;

void input(int*,int);
void swap(int,int);
void InsertionSort(int* Arr, int);
void output(int*, int);

int main()
{
    int n;
    cout<<"Hay nhap so phan tu co trong mang la: "; cin>>n;
    int* Arr = new int[n];
    input(Arr,n);
    cout<<"Mang vua nhap la: ";
    output(Arr,n);
    InsertionSort(Arr,n);
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
void InsertionSort(int* Arr, int n)
{
    int Index ; // Chia mảng thành 2 phần phần bên trái index là sort rồi còn bên phải là unsort
    int Current ; //Lưu giá trị tại index
    int Position; //Tìm vị trí
    for(Index = 1; Index < n; Index++)
    {
        Current = Arr[Index]; //Lưu giá trị tại index
        Position = Index -1 ; //Tìm vị trí
        while(Position >= 0 && Arr[Position] > Current)
        {
            Arr[Position + 1] = Arr[Position];
            --Position;
        }
        Arr[Position + 1] = Current;
    }
    
}

