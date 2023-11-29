#include <bits/stdc++.h>

using namespace std;

long file_LinearSearching(string,char);

int main()
{
    string filename = "D:\\DATE\\Dev Workspace\\data structures and algorithms\\Data-Structures-and-Algorithms-PTIT\\Data-Structures-and-Algorithms-PTIT\\Searching\\File_Searching\\Data.text";
    char point;
    cout<<"Hay nhap gia tri can tim: "; cin>>point;
    cout<<"Gia tri can tim o vi tri: "<<file_LinearSearching(filename,point);
    return 0;
}

long file_LinearSearching(string file, char point)
{
    fstream File;
    File.open(file);
    if(!File.is_open())
    {
        return -1;
    }
    char Value;
    long k = 0;
    int SizeOfPoint = sizeof(point);
    while (!File.eof())
    {
        File.read(&Value,SizeOfPoint);
        k = k + SizeOfPoint;
        if(Value == point)
        {
            File.close();
            return k;
        }
    }
    File.close();
    return -1;
}
