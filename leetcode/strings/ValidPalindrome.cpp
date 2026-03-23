#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string x = "";
        for(char c : s) {
            if(isalnum(c)) {
                x += (char)tolower(c);
            }
        }
        int l = 0, r = x.size() - 1;
        while(l < r) {
            if(x[l] != x[r]) return false;
            l++;
            r--;
            
        }
        return true;
    }
};

//isalnum = ham kiem tra chu so va ki tu
//duyet mang phu de day cac ki tu, tach cac ki tu dac biet ra ngoai
//dung two pointer de xu ly, do phuc tap O(n)
//kiem tra doi xung