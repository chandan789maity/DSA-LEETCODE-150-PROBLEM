#include<iostream>
#include<vector>
using namespace std;
vector<int> ProductWithoutSelf(vector<int> &nums,int n){
    vector<int>left(n,1);
    vector<int>right(n,1);
    for(int i=1;i<n;i++){
        left[i]=left[i-1]*nums[i-1];
    }
    for(int i=n-2;i>=0;i--){
        right[i]=right[i+1]*nums[i+1];
    }
    for(int i=0;i<n;i++){
        left[i]*=right[i];
    }
    return left;
}
int main(){
    vector<int>nums;
    int n;
    int element;
    cout<<"Enter the size of the array."<<endl;
    cin>>n;
    cout<<"Enter the Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>element;
        nums.push_back(element);
    }
    vector<int>res=ProductWithoutSelf(nums,n);
    cout<<"Result Array";
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}

