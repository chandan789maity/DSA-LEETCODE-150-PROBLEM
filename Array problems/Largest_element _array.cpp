#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n;
    vector<int> nums;

    cout << "Enter the number of elements:" << endl;
    cin >> n;

    cout << "Enter the elements:" << endl;
    for(int i = 0; i < n; i++) {
        int element;
        cin >> element;
        nums.push_back(element);
    }

    if (!nums.empty()) {
        int maxElement = *max_element(nums.begin(), nums.end());
        cout << "Largest element is: " << maxElement << endl;
    } else {
        cout << "No elements were entered." << endl;
    }

    return 0;
}
