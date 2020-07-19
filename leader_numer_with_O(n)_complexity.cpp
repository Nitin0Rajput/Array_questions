  #include <iostream>
#include <stdlib.h>
#include <limits.h>

using namespace std;
void leader(int arr[],int n){
  int largest_from_right=arr[n-1];
  cout<<largest_from_right<<" ";
   
   for(int i=n-2;i>=0;i--){
     if(largest_from_right<arr[i]){
       largest_from_right=arr[i];
       cout<<largest_from_right<<" ";
     }
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