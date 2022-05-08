#include<iostream>
using namespace std;

int deleteAr(int arr[] , int n , int key )
{
    int i;
   for(i =0;i<n;i++)
   if(arr[i]==key)
   break;

if(i==n)
return -1;

for(int j =i;j<n-1;j++)
{
    arr[j]=arr[j+1];

}

return (n-1);


}

int main()
{
    int arr[5]={1,2,3,4,5};
    int n =5;
    
    int key = 4;
    n=deleteAr(arr,n,key);
    cout<<"New array is : "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}