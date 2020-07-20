#include <iostream>
#include <stdlib.h>
#include <limits.h>

using namespace std;
 void majority(int arr[],int n){
   int maxcount=0;
   int index=-1;
for(int i=0;i<n;i++){
  int count=0;
  for(int j=0;j<n;j++){
    if(arr[i]==arr[j]){
      count++;
     }
    
  }
  if(count % 2!=0){
    index=i;
  }
}
 cout<<arr[index];
 }
  int main() {
   int n;
   int arr[]={5,7,2,7,5,5,2,2,5};
   n=sizeof(arr)/sizeof(arr[0]);
   cout<<"This the array : "<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
   cout<<endl<<"This is the number who occurs odd number of times in array"<<endl;
   majority(arr,n);
   
    return 0;
 }