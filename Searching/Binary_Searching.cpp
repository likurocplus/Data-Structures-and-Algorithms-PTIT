#include <bits/stdc++.h>

using namespace std;

void inputArr(int* Arr,int n);
int NonRecBinarySearching(int* Arr, int n, int point);
int recBinarySearching(int* Arr, int first , int last , int point);

int main()
{
    cout<<"Hay nhap gia tri cua n: ";
    int n;
    cin>>n;
    int *Arr = new int[n];
    inputArr(Arr,n);
    cout<<"Hay nhap gia tri muon tim kiem: ";
    int point; cin>>point;
    cout<<"Gia tri can tim o vi tri "<<recBinarySearching(Arr,0,n,point)<< endl;
    cout<<"Gia tri can tim o vi tri (theo cach NoRec) "<<NonRecBinarySearching(Arr,n,point);
    delete [] Arr;
    system("pause");
    return 0;
}

void inputArr(int* Arr, int n)
{
    for(int i=0; i<n ; i++){
        cout<<"Hay nhap phan tu thu"<<i<<" :";
        cin>>Arr[i];
    }
}

int NonRecBinarySearching(int* Arr, int n, int point)
{
    int first = 0;
    int last = n;
    int mid;
    while(first<=last)
    {
        mid = ( first + last ) / 2;
        if(Arr[mid]==point)
        {
            return mid;
        }
        if(point<Arr[mid])
        {
            last=mid-1;
        }
        else 
        {
            first=mid+1;
        }
    }
    return -1;
    
}

int recBinarySearching(int* Arr, int first , int last , int point)
{
    if( first > last )
    {
        return -1;
    }
    int mid = (first + last)/2;
    if(point==Arr[mid])
    {
        return mid;
    }
    if(point < Arr[mid])
    {
        return recBinarySearching(Arr,first, mid - 1 , point);
    }
    else
    {
        return recBinarySearching(Arr,mid+1,last,point);
    }
    
}