#include <iostream>
using namespace std;
 void peak_element(int arr[],int n){
if(arr[n-1]>arr[n-2]){
  cout<<arr[n-1]<<" ";
}
 
    for(int i=0;i<n-1;i++){
      if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
        cout<<arr[i]<<" ";
      }
    }
    
 }
  int main() {
   int n;
   int arr[]={52,80,20,15,50,20};
   n=sizeof(arr)/sizeof(arr[0]);
   cout<<"This the array : "<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
    cout<<endl<<"This is the peak elements of the array"<<endl;
    peak_element(arr,n);
       return 0;
 }