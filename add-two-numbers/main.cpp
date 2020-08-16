#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    int sum = 0;
    ListNode* l1n { nullptr };
    ListNode* l2n { nullptr };
    if(l1 != nullptr && l2 != nullptr) {
        sum = l1->val + l2->val;
        l1n = l1->next;
        l2n = l2->next;
    } else if(l1 != nullptr) {
        sum = l1->val;
        l1n = l1->next;
    } else if(l2 != nullptr) {
        sum = l2->val;
        l2n = l2->next;
    } else
        return nullptr;

    int carry = 0;
    if(sum > 9) {
        sum = sum - 10;
        carry = 1;
    }

    struct ListNode* node = new ListNode(sum);
    ListNode* next = addTwoNumbers(l1n, l2n);

    if(carry == 1) {
        if(next == nullptr) {
            node->next = new ListNode(carry);
        } else if((next->val + carry) < 10) {
            next->val = next->val + carry;
        } else {
            next = addTwoNumbers(next, new ListNode(carry));
        }
    }
    if(next != nullptr)
        node->next = next;
    return node;
}

int main()
{
    struct ListNode *node1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    struct ListNode *node2 = new ListNode(5, new ListNode(6, new ListNode(4)));
    ListNode *output = addTwoNumbers(node1, node2);
    return 0;
}