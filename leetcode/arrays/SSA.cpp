#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cout << "nums[" << i << "] = ";
        cin >> nums[i]; 
    }

    int pos = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            nums[pos]*=nums[pos];
            swap(nums[pos],nums[i]);
            pos++;
        }
    }
    for(int i : nums) {
        cout << i << " ";
    }
}