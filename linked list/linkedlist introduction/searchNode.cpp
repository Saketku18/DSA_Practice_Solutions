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
int search(node* head,int key){
    if(!head)
    return -1;
    node* temp=head;
    int pos=1;
    while(temp){
        if(temp->val==key)
        return pos;
        pos++;
        temp=temp->next;
    }
    return -1;
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
    cout<<search(head,3);
}