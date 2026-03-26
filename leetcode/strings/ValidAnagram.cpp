#include <iostream>

using namespace std;

class Solution{
        public:
        void swap(char &a, char &b) {
            char temp = a;
            a = b;
            b = temp;
        }
        bool isValidAnagram(string s, string t) {
            int left = 0, right = s.size() - 1;
            int postion = 0;
            while(left < right) {
                if(s[left] > s[right]) {
                    swap(s[left],s[right]);
                    left++;
                    right--;
                } else if(s[left] = s[right]) {
                    swap(s[left],s[right-1]);
                    left++;
                    right--;}
            }
        }
};

int main() {
    
}

//sort the string to make it down from a to z, then compare each other to return true or false
//anagram - nagaram
//Insight: Sliding Window
//Complexity: O(n) or O(nlogn)
