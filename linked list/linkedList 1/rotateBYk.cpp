#include <bits/stdc++.h>
using namespace std;

struct node {
    int val;
    node* next;
    node(int d) { val = d; next = NULL; }
};

node* rotate(node* head, int k) {
    if (!head || !head->next) return head;

    node* temp1 = head;
    int count = 0;
    while (temp1) {
        count++;
        temp1 = temp1->next;
    }
    k = k % count;
    if (k == 0) return head;
    int p = count - k;
    node* newTail = head;
    for (int i = 1; i < p; i++) {
        newTail = newTail->next;
    }
    node* newHead = newTail->next;
    newTail->next = NULL;
    node* temp = newHead;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = head;
    return newHead;
}
void printList(node* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << "->";
        head = head->next;
    }
    cout << endl;
}
int main() {
    node* head = new node(5);
    head->next = new node(1);
    head->next->next = new node(3);
    head->next->next->next = new node(7);
    head->next->next->next->next = new node(4);
    head->next->next->next->next->next = new node(2);
    head->next->next->next->next->next->next = new node(9);
    printList(head);
    head = rotate(head, 3);
    printList(head);
}
