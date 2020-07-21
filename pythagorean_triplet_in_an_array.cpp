#include <iostream>
 using namespace std;
bool  pythagorean_triplet(int arr[],int n){
   for(int a=0;a<n;a++){
     for(int b=a+1;b<n;b++){
       for(int c=b+1;c<n;c++){
         int x=arr[a]*arr[a],y=arr[b]*arr[b],z=arr[c]*arr[c];
         if(x == y + z || y == x + z || z == x + y) 
           return true;    
       }
     }
   }
   return false;
 }
  int main() {
   int n;
   int arr[]={3,1,4,6,5};
   n=sizeof(arr)/sizeof(arr[0]);
   cout<<"This the array : "<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      };
     
     
    pythagorean_triplet(arr,n) ? cout<<endl<<"This is the pythagorean triplet" :  cout<<endl<<"This is not a pythagorean triplet";
      return 0;
 }