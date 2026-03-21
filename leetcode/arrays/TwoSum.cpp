#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    public:
    vector<int> twoSum(vector<int> &nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
        for(int a = i + 1; a < nums.size(); a++) {
            if(nums[i] + nums[a] == target) {
                return {i, a};
            }
        }
    } 
    return {};
    }
};

//hihi duoc roi gioi qua 

int main() {
    //khai bao mot vector 1d thong thuong
    //duyet tung phan tu trong mang de cong gia tri bang target
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cout << "v[" << i << "] = ";
        cin >> v[i]; 
    }
    int target = 9;
    for(int i = 0; i < n; i++) {
        for(int a = i + 1; a < n; a++) {
            if(v[i] + v[a] == target) {
                cout << "[" << i << ", " << a <<"]";
                return 0;
            }
        }
    } 
    //chi dung o truong hop dau tien, sai khi khong duyet het cac phan tu
    return 0;
}