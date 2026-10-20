#include<iostream>
#include<vector>
using namespace std;

void move_zero(vector<int>&vec,int n){
int j=0;
    for(int i=0;i<n;i++){
        if(vec[i]!=0){
             int temp=vec[j];
             vec[j]=vec[i];
             vec[i]=temp;
             j++;
        }
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size :";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter elements:"<<endl;

    for(int i=0;i<n;i++){
         cin>>v[i];
    }
    move_zero(v,n);

    return 0;

}