#include <iostream>
using namespace std;

class ListNode {
    
public:
    int val;
    ListNode* next;
    ListNode(int val) { 
        this->val = val;
        this->next = nullptr;
    }
};

class LinkedListAddition {
    
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        int carry = 0;
        while (l1 || l2 || carry) {
            int total = carry;
            if (l1) {
                total += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                total += l2->val;
                l2 = l2->next;
            }
            carry = total / 10;
            tail->next = new ListNode(total % 10);
            tail = tail->next;
        }
        return dummy.next;
    }
};

void printList(ListNode* node) {
    while (node) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    LinkedListAddition solution;
    ListNode* result = solution.addTwoNumbers(l1, l2);
    printList(result);
    return 0;
}
//Output:7 0 8
