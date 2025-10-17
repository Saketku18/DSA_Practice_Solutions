#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int d) { val = d; next = NULL; }
};

Node* deleteDuplicates(Node* head) {
    if (!head) return head;

    Node* temp1 = head;
    Node* temp2 = head->next;

    while (temp2 != NULL) {
        if (temp2->val == temp1->val) {
            Node* dup = temp2;
            temp2 = temp2->next;
            delete dup;
        } else {
            temp1->next = temp2;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    temp1->next = NULL;
    return head;
}
void printList(Node* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << "->";
        head = head->next;
    }
    cout << endl;
}
int main() {
    // Create sorted linked list: 1->1->2->3->3->4
    Node* head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(3);
    head->next->next->next->next->next = new Node(4);

    cout << "Original List: ";
    printList(head);

    head = deleteDuplicates(head);

    cout << "After Removing Duplicates: ";
    printList(head);
}
