#include <iostream>
 using namespace std;
void segregate(int arr[],int n){
  int count=0;
  for(int i=0;i<n;i++){
    if(arr[i]==0)
    count++;
  }
  for(int i=0;i<count;i++){
    arr[i]=0;
  }
  for(int i=count;i<n;i++){
    arr[i]=1;
  }
    for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";}
}
 
  int main() {
   int n;
   int arr[]={0,1,0,1,1,1,1,1,0,0,1,1,1,0};
   n=sizeof(arr)/sizeof(arr[0]);
   cout<<"This the array : "<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      };
      cout<<endl<<"This the segregate of the array : "<<endl;
      segregate(arr,n);
       
       return 0;
 }