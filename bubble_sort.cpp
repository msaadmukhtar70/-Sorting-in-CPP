
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
        
        for(int i=1; i<n; i++)
        {
            for (int j = 0; j < n-1; j++)
            {
               if (arr[j+1]<arr[j])
               {
                   temp=arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp;
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