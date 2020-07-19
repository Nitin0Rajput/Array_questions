#include <iostream>
#include <stdlib.h>
#include <limits.h>

using namespace std;
void leader(int arr[],int n){
  int dist=INT_MAX;
  
  for(  int i=0;i<n;i++){
    int j;
    for(j=i+1;j<n;j++){
       if(arr[i]<=arr[j])
       break;
    }
    if( j==n)
    cout<<arr[i]<<" ";
  }
   
}
  int main() {
    int n;
    int x;
    int y;
    cout<<"Enter the size of array : ";
    cin>>n;
  int arr[n];
  cout<<endl<<"Enter the "<<n<<" elements of the array "<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"This is the array : ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl<<"The leader numbers of the array : ";

   n=sizeof(arr)/sizeof(arr[0]);
leader(arr,n);
  return 0;
 
 }