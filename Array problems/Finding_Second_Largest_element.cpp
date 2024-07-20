#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int secondlargest(vector<int> &nums,int n){
    //Time complexity O(n)
    int largest=INT_MIN;
    int second=INT_MIN;
    for(int i=0;i<n;i++){
        largest=max(largest,nums[i]);
    }
    //Now finding the second largest element
    for(int i=0;i<n;i++){
        if(nums[i]>second && nums[i]<largest)
            second=nums[i];
    }
    return second;
}
int main(){
    int n;
    vector<int>nums;
    cout<<"Enter the number of element in the array:";
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        nums.push_back(element);
    }
    int second=secondlargest(nums,n);
    cout<<"Second largest element is: "<<second<<endl;
    
    return 0;
}