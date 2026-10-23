#include<iostream>
using namespace std;

int water(int arr[],int n){
    int l=0,r=n-1;
    int lmax=0,rmax=0;
    int water=0;
    while(l<r){
        if(arr[l]<=arr[r]){
            if(arr[l]>=lmax){
                lmax=arr[l];
            }
            else{
                water+=lmax-arr[l];
            }
           l++;  
        }
        else{
             
            if(arr[r]>=rmax){
                rmax=arr[r];
            }
            else{
                water+=rmax-arr[r];
            }   
            r--; 
            }
    }
    return water;
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
    cout<<"Trapped water is:"<<water(array,n)<<endl;

    return 0;
}