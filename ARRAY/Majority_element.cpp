#include<iostream>
#include<unordered_map>
using namespace std;

int major_element(int arr[], int n){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int maj=n/2;
    for(auto it:mp){
        if(it.second>maj){
            return it.first;
        }
    }
    return -1;
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
    cout<<"Majority element:"<<major_element(array,n);

    return 0;
}