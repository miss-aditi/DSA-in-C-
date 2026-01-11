#include<iostream>
using namespace std;
void update(int arr[],int n){
  cout<<endl <<"inside the function"<<endl;
  // updating  arrays first element
  arr[0] = 120;
  // printing the array
  for(int i=0; i<3;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

}

int getMax(int num[], int n){
  int maxi = INT_MIN;
  for(int i=0; i<n; i++){
    // if(num[i] > max){
    //   max = num[i];
    // }
    maxi = max(maxi, num[i]);
  }
  return maxi;
}

int getMin(int num[], int n){
  int mini  = INT_MAX;
  for(int i=0; i<n; i++){
    // if(num[i] < min){
    //   min = num[i];
    // }
    mini = min(mini,num[i]); 
  }
  return mini;
}

int main(){
  int n;
  cin>>n;
  int num[100];

  for(int i = 0; i<n; i++){
    cin>>num[i];
  }
   cout<<"Maximum element in array  "<<getMax(num,n)<<endl;
   cout<<"Minimum element in array  "<<getMin(num,n);
}