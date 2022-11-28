#include<iostream>
using namespace std;
// insertion sort in array

int main(){
    int n, current, j;
cout<<"Enter the size of array "<<endl;
cin>>n;
int arr[n];
    cout<<"Enter the element of array";
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 1; i < n; i++)
{
    current=arr[i];
    j=i-1;
    while (arr[j]>current && j>=0)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
}
cout<<"The sorted elements are ";
for (int i = 0; i < n; i++)
{
    
cout<<" "<<arr[i];
}



    return 0;
    }