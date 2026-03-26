#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Hàm đảo ngược danh sách
void reverseList(Node* &head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr != nullptr) {
        // 1. Giữ địa chỉ node tiếp theo
        next = curr->next;

        // 2. Đảo ngược con trỏ của node hiện tại
        curr->next = prev;

        // 3. Di chuyển prev và curr tiến lên một bước
        prev = curr;
        curr = next;
    }

    // 4. Cập nhật lại head là node cuối cùng (nay là đầu tiên)
    head = prev;
}

// Hàm in danh sách
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}