#include <iostream>
#include <stdlib.h>
#include <limits.h>

using namespace std;
 void  fixed_point(int arr[],int n){
   int index=-1;
   for(int i=0;i<n;i++){
     if(arr[i]==i){
       index=i;
     } 
   }
   if(index!=-1){
   cout<<endl<<arr[index]<<endl;
   }else{
     cout<<"No fixed Point";
   }
 }
  int main() {
   int n;
   int arr[]={2,9,2,5,6,7};
   n=sizeof(arr)/sizeof(arr[0]);
   cout<<"This the array : "<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
    cout<<endl<<"This is a fixed point(value equal to index) of the array"<<endl;
    fixed_point(arr,n);
       return 0;
 }