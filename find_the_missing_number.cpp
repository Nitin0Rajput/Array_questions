#include <iostream>
using namespace std;
void missing_number(int arr[],int n){
  //first find the sum of the series
  int total=(n+1)*(n+2)/2;
  for(int i=0;i<n;i++)
  //now substract the total with every element of the series
    total-=arr[i];  
cout<<total;

}
 int main() {
   cout<<"Program for find the missing number of the array of series of 1 to n"<<endl;
   int arr[]={1,2,3,4,5,7,8,9};
   int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
   }
   cout<<endl<<"Here is the missing number :";
   missing_number(arr,n);
 return 0;
 
 }