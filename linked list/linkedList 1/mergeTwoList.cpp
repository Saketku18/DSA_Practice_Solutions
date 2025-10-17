#include <bits/stdc++.h>
using namespace std;
struct Node {
    int val;
    Node* next;
    Node(int d){
        val=d;
        next=NULL;
    }
};
Node* mergeSortedLists(Node* l1, Node* l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    Node* head = NULL;
    if (l1->val < l2->val) {
        head = l1; l1 = l1->next;
    } else {
        head = l2; l2 = l2->next;
    }
    Node* tail = head;
    while (l1 && l2) {
        if (l1->val < l2->val) {
            tail->next = l1; l1 = l1->next;
        } else {
            tail->next = l2; l2 = l2->next;
        }
        tail = tail->next;
    }
    if (l1) tail->next = l1;
    if (l2) tail->next = l2;

    return head;
}
void printList(Node* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    Node* l1 = new Node(1);
    l1->next = new Node(3);
    l1->next->next = new Node(5);
    Node* l2 = new Node(2);
    l2->next = new Node(4);
    l2->next->next = new Node(6);
    Node* merged = mergeSortedLists(l1, l2);
    cout << "Merged Sorted List: ";
    printList(merged);
}
