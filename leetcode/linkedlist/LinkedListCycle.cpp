#include <iostream>
using namespace std;



 struct ListNode {
    int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* once = head;
        ListNode* twice = head;
        while(twice!= nullptr && twice->next!=nullptr) {
            once = once->next;
            twice = twice->next->next;
            if(once == twice) {
                return true;
            }
        }
        return false;

    }
};