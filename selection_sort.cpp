#include<iostream>
     
    using namespace std;

    int main(){
        int n ,temp;
        cout<<"Enter  the size of array: "<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter the elements of array: "<<endl;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        for(int i=0; i<=n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
               if (arr[j]<arr[i])
               {
                   
                   temp=arr[j];
                   arr[j]=arr[i];
                   arr[i]=temp;
               }
                
            }
            
        }
        cout<<"the sorted array is given by:"<<endl;
        for (int i = 0; i < n; i++)
        {
           cout<<" "<<arr[i];
        }
        
        return 0;
    }