#include<iostream>
using namespace std;

void sort_array(int arr[], int n){
      int zero=0;
      int one =0;
      int two=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
             zero++;
        }
        else if(arr[i]==1){
            one++;
        }
       
    }
    for(int i=0;i<n;i++){
        if(i<zero){
            arr[i]=0;
        }
        else if(i>=zero&& i<(one+zero)){
            arr[i]=1;
        }
        else{
            arr[i]=2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort_array(arr,n);

    return 0;

}