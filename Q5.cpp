#include<bits/stdc++.h>
using namespace std;

vector<int> rotateKTimes(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; 

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());

    return nums;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    
    rotateKTimes(nums, k);

    cout << "After Rotating " << k <<" times: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
