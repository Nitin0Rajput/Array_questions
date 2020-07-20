#include <iostream>
#include <stdlib.h>
#include <limits.h>

using namespace std;
 void  modified(int arr[],int n){
   int maxlarge=arr[n-1];
   arr[n-1]=-1;
   for(int i=n-2;i>=0;i--){
     int temp=arr[i];
     arr[i]=maxlarge;
     if(maxlarge<temp)
       maxlarge=temp;
   }
 }
 void show(int arr[],int n){
   for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
   }
 }
  int main() {
   int n;
   int arr[]={2,9,4,5,6,7};
   n=sizeof(arr)/sizeof(arr[0]);
   cout<<"This the array : "<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
    cout<<endl<<"After modified the array"<<endl;
   modified(arr,n);
   show(arr,n);
       return 0;
 }