#include<iostream>
using namespace std;

int sec_larg(int arr[], int n){
    int max=INT_MIN;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
           ans=max;
           max=arr[i];
        }
        else{
            if(ans<arr[i]&& max!=arr[i]){
                ans=arr[i];
            }
            
        }
    }
    if(ans==INT_MIN){
        return -1;
    }
    else{
        return ans;
    }
}
int main(){

    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int array[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Second largest element is:"<<sec_larg(array,n);

    return 0;
}