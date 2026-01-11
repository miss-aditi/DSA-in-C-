#include<iostream>
using namespace std;
sumOfArray(int arr[], int n){
  int sum = 0;
for(int i=0; i<n;i++){
   sum = arr[i] + sum;
}
{
  cout<<"sumOfArray "<<sum<<endl;
}
  return sum;
}


int main(){
  int n;
  cin>>n;
  int arr[100];
  cout<<"read array element"<<endl; 
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  sumOfArray(arr, n);
}