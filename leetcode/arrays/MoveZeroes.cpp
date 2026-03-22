#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0 ) {
                swap(nums[pos], nums[i]);
                pos++;
            }
        }
        cout << "[";
        for(int j : nums) {
            cout << j <<",";
        }
        cout << "]";
    }
};

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cout << "nums[" << i << "] = ";
        cin >> nums[i]; 
    }

    int pos = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i]!=0) {
        swap(nums[pos], nums[i]);
        pos++;
    }
}
    
    for(int i : nums) {
        cout << i << " ";
    }
}