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
node* reverse(node* head){
    if(!head || !head->next)
    return head;
    node* prev=NULL;
   node* temp=head;
   while(temp){
    node* nxt=temp->next;
    temp->next=prev;
    prev=temp;
    temp=nxt;
   }
   return prev;
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
    head=reverse(head);
    t=head;
     while(t->next){
        cout<<t->val<<"->";
        t=t->next;
    }
    cout<<t->val<<endl;
}