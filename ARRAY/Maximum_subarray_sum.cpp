#include<iostream>
using namespace std;

int max_sum(int arr[], int n){
    int sum=0,ans=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        ans=max(ans,sum);
    }

    return ans;
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
    cout<<"Maximum sum subarray:"<<max_sum(array,n);

    return 0;
}