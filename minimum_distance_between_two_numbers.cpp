#include <iostream>
#include <stdlib.h>
#include <limits.h>

using namespace std;
void difference_two_numbers(int arr[],int x,int y,int n){
  int dist=INT_MAX;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(((x==arr[i] && y==arr[j]) || ( y==arr[i] && x==arr[j])) && (dist>abs(i-j)))
      {
        dist=abs(i-j);
      }
      
    }
  }
  cout<<"The minimum distance between these two numbers "<<x<<" and "<<y<<" is "<<dist;
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
  cout<<endl<<"Enter the two numbers to find the minimum distannce between them : ";
  cin>>x>>y;
   n=sizeof(arr)/sizeof(arr[0]);
difference_two_numbers(arr,x,y,n);
  return 0;
 
 }