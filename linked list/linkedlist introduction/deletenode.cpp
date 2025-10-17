#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node* next;
    node(int d){
        val=d;
        next=NULL;
    }
};
node* deletefirst(node* head){  // add at front
   
    if(!head)
    return NULL;
    node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
node* deletelast(node* head){
    if(head==NULL)
    return NULL;
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    node* it = head;
    while (it->next->next) {
        it = it->next;
    }
    delete it->next;   
    it->next = NULL; 
    return head;
}
node* deleteAtposition(node* head,int pos){
    if (pos <= 1 || !head) {
        return NULL;
    }
   if (pos <= 1) {
        node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int i = 1;
    node* it = head;
    node* prev = NULL;
    while (i < pos && it != NULL) {
        i++;
        prev = it;
        it = it->next;
    }
    if (it == NULL) 
        return head;
    prev->next = it->next;
    it->next = NULL;
    delete it;
    return head;
}
int main(){
    node* head=new node(5);
    head->next=new node(1);
    head->next->next=new node(3);
    head->next->next->next=new node(7);
    head->next->next->next->next=new node(4);
    head->next->next->next->next->next=new node(2);
    head->next->next->next->next->next->next=new node(9);
    node* t=head;
    while(t->next){
        cout<<t->val<<"->";
        t=t->next;
    }
    cout<<t->val<<endl;
    
    head=deletefirst(head); //delete front
    t=head;
     while(t->next){
        cout<<t->val<<"->";
        t=t->next;
    }
    cout<<t->val<<endl;
    head=deletelast(head);  //delete last
    t=head;
     while(t->next){
        cout<<t->val<<"->";
        t=t->next;
    }
    cout<<t->val<<endl;
    head=deleteAtposition(head,5); //deleteAtposition
    t=head;
     while(t->next){
        cout<<t->val<<"->";
        t=t->next;
    }
    cout<<t->val<<endl;
}