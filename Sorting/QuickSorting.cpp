#include <bits/stdc++.h>

using namespace std;

void input(int*,int);
void swap(int*,int*);
int Partition(int *Arr, int first, int last);
void QuickSort(int* Arr, int,int);
void output(int*, int);

int main()
{
    int n;
    cout<<"Hay nhap so phan tu co trong mang la: "; cin>>n;
    int* Arr = new int[n];
    input(Arr,n);
    cout<<"Mang vua nhap la: ";
    output(Arr,n);
    QuickSort(Arr,0,n-1);
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

// void swap(int* a,int* b)
// {
//     int *tmp;
//     *mp = *a;
//     *a = *b;
//     *b = *tmp;
// }

int Lumoto_Partition(int *Arr, int first, int last)
{
    int pivot = Arr[last];
    int i = first - 1;
    for (int j = first ; j <= last - 1; j++ )
    {
        if (Arr[j]<pivot)
        {
            ++i;
            int tmp = Arr[j];
            Arr[j]=Arr[i];
            Arr[i]=tmp;
        }
    }
    ++i;
    int tmp = Arr[i];
    Arr[i]=Arr[last];
    Arr[last]=tmp;

    return i;
}

void QuickSort(int *Arr, int first, int last)
{
    if(first > last ) return;
    int p = Lumoto_Partition(Arr,first,last);
    QuickSort(Arr,first,p-1);
    QuickSort(Arr,p+1,last);
}

