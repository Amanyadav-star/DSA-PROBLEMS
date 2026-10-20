#include<iostream>
using namespace std;

int missing_no(int arr[], int n){
    int sum=0;
    int act_sum=(n*(n+1))/2;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans=act_sum-sum;
    return ans;
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
    cout<<"Missing number:"<<missing_no(arr,n);

    return 0;
}