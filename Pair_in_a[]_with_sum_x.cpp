#include <iostream>
 using namespace std;
bool segregate(int arr[],int n){
   for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
       if(arr[i]+arr[j]==-2){
         return true;
       }
     }
   }
   return false;
   }
 
  int main() {
   int n;
   int arr[]={0,-1,2,-5,8};
   int x=-2;
   n=sizeof(arr)/sizeof(arr[0]);
   cout<<"This the array : "<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      };
      cout<<endl<<"This the segregate of the array : "<<endl;
      segregate(arr,n) ? cout<<"YES" : cout<<"NO";
       
       return 0;
 }