   #include<iostream>
   using namespace std;
   bool search(int arr[],int size, int key){
    for(int i = 0; i<size; i++){
      if( arr[i] == key){
        return 1;
      }
    }
    return 0;
   }
   int main(){
    int n;
     int arr[10] = {5,7,8,9,34,78,80,23,45,90};
    cout<<"enter the element to search for "<< endl;
    int key;
    cin>>key;
    bool found = search(arr , 10, key);
    if(found){
      cout<<"key is present"<<endl;

    }
    else{
      cout<<"key is not present"<<endl;
    }
   }