#include <bits/stdc++.h>

using namespace std;

long file_LinearSearching(string,int);

int main()
{
    fstream file;
    file.open("D:\\DATE\\Dev Workspace\\data structures and algorithms\\Data-Structures-and-Algorithms-PTIT\\Data-Structures-and-Algorithms-PTIT\\Searching\\File_Searching\\Data.text");
    if(!file.is_open()) 
    {
        return -1;
    }
    string filename = "D:\\DATE\\Dev Workspace\\data structures and algorithms\\Data-Structures-and-Algorithms-PTIT\\Data-Structures-and-Algorithms-PTIT\\Searching\\File_Searching\\Data.text";
    int point;
    cout<<"Hay nhap gia tri can tim: "; cin>>point;
    cout<<"Gia tri can tim o vi tri: "<<file_LinearSearching(filename,point);
    return 0;
}

long file_LinearSearching(string file, int point)
{
    fstream File;
    File.open(file);
    if(!File.is_open())
    {
        return -1;
    }
    int Value = 0;
    int i = 0;
    while (Value != point && i != File.eof())
    {
        i = i + sizeof(point);
    }
    if(i != File.eof())
    {
        return i;
    }
    else
    {
        return -1;
    }
}
