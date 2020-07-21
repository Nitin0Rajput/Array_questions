#include <iostream>
using namespace std;
 void subarray(int arr[],int n){
int count=0;
   for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
       if(arr[j]>arr[j-1]){
count++;
       }else{
         break;
       }
     }
   }
  cout<<count<<" ";
 }
  int main() {
   int n;
   int arr[]={1,2,3,4,5};
   n=sizeof(arr)/sizeof(arr[0]);
   cout<<"This the array : "<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
    cout<<endl<<"This is the count of subarray : "<<endl;
    subarray(arr,n);
       return 0;
 }