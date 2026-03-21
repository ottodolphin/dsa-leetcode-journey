#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
    int maxProfit(vector<int> &prices) {
        int min_price = 1e9;
        int max_profit = 0;
        for(int price : prices) {
            if(price < min_price) {
                min_price = price; //cap nhat day moi
            } else if (price - min_price > max_profit){
                max_profit = price - min_price;
            }
        }
        return max_profit;
    }
};
//không cần duyệt tất cả các phần tử nhiều lần, chỉ cần tìm ra ngày có giá thấp nhất
//và ngày có giá cao nhất để so sánh -> tìm ra profit tối ưu 

//profit
//day-sell - day-buy = max

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> d(n);
    for(int i = 0; i < n; i++) {
        cout << "d[" << i << "] = ";
        cin >> d[i];
    }
    int max = 0;
    for(int i = 0; i < n; i++) {
        for(int a = i + 1; a < n; a++) {
            if(d[a] - d[i] >= max) {
                max = d[a] - d[i];
            } 
        }
    }
    cout << "Profit = " << max;
    return 0;
    
}

//do phuc tap O(n^2) -> khong toi uu
//chuyen ve do phuc tap O(n)