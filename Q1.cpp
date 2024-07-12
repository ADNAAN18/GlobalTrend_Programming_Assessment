#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseLinkedList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* forward;

    while (curr != NULL) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;

    return head;
}

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}



int main() {
    // Create a linked list with some random values
   
    ListNode* head = new ListNode(1);
    ListNode* t1 = new ListNode(2);
    head->next = t1;
    ListNode* t2 = new ListNode(3);
    t1->next = t2;
    ListNode* t3 = new ListNode(4);
    t2->next = t3;
    cout << "Original Linked List: ";
    printList(head);

    // Reverse the linked list
    head = reverseLinkedList(head);

    cout << "Reversed Linked List: ";
    printList(head);

    return 0;
}
