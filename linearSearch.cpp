#include<iostream>
using namespace std;
int linearSearch(int num[], int sz, int target){
  for(int i=0; i<sz; i++){
  if(num[i] == target){ //found
    return i;
  }
}
return -1;
}
int main(){
  int sz;
  
  cout<<"Enter the size of array : ";
  cin>>sz;
  int num[100];
  cout<<"enter " <<sz <<" number : ";
  for(int i=0; i<sz; i++){
    cin >> num[i];
  }
  int target;
  cin>>target;
  cout<< "array element is"<<linearSearch(num, sz, target)<<target<<endl;
}
