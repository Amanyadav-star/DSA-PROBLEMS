#include<iostream>
#include<vector>
using namespace std;

void prod_arr(vector<int>&v){
 vector<int>ans(v.size());
 int prefix=1;
 for(int i=0;i<v.size();i++){
    ans[i]=prefix;
    prefix*=v[i];
 }
 int suffix=1;
 for(int i=v.size()-1;i>=0;i--){
    ans[i]*=suffix;
    suffix*=v[i];
 }
 for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
 }
 

}
int main(){
    int n;
    cout<<"Enter no. of element:";
    cin>>n;

vector<int>vec(n);
    cout<<"Enter elements:"<<endl;

    for(int i=0;i<n;i++){
         cin>>vec[i];
    }
    prod_arr(vec);

    return 0;
}