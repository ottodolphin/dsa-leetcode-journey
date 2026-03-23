#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
        for(char i : s) {
            cout << i;
        }
    }
};

//toc do xu ly 4ms (run time)
//toi uu hoa (?) -> them temp, gan high - low