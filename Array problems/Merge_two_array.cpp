#include<iostream>
#include<vector>
using namespace std;
    void merge(vector<int>& nums1, int m,vector<int>& nums2, int n) {
        int i=m-1,j=n-1;
        int k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k--]=nums1[i--]; 
            }
            else{
                nums1[k--]=nums2[j--];
            }
        }
        //This is for whenever a array is empty
        for(;i>=0;i--)
            nums1[k--]=nums1[i--];
        for(;j>=0;j--)
            nums1[k--]=nums2[j--];
        
    }
    //The size of the array 1 is m+n and we will not use any extra space
int main(){
    int m,n;
    cout<<"Enter the size of array1 and array 2"<<endl;
    cin>>m>>n;
    vector<int>nums1((m+n),0),nums2(n);
    cout<<"Enter the sorted elements of the array 1"<<endl;
    for(int i=0;i<m;i++){
        cin>>nums1[i];
    }
    cout<<"Enter the 2nd Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums2[i];
    }
    merge(nums1,m,nums2,n);
    cout<<"Merged array is:"<<endl;
    for(int i=0;i<m+n;i++){
        cout<<nums1[i]<<" ";
    }
    return 0;
}
