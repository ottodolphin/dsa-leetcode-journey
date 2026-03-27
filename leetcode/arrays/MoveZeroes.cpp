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
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cout << "nums[" << i << "] = ";
        cin >> nums[i]; 
    }

    
    for(int i : nums) {
        cout << i << " ";
    }
}