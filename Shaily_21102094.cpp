#include<bits/stdc++.h>
using namespace std;

struct node{
    int age;
    string name;
    node *prev;
    node *next;
    node(string s,int x){
        age = x;
        name = s;
        prev=NULL;
        next=NULL;
    }
};

void printthelist(node *head){
    while(head!=NULL){
        cout<<head->name<<"-"<<head->age<<" ";
        head=head->next;
    }
}

int main(){
    node *father=new node("PRAMOD KUMAR",45);
    node *mother=new node("PAYAL KUMAR",42);
    node *myself=new node("SHAILY",18);
    node *sister1=new node("SHRUTI",14);
    node *sister2=new node("SANVI",10);

    node *head=father;

    father->prev=NULL;
    father->next=mother;
    mother->prev=father;
    mother->next=myself;
    myself->prev=mother;
    myself->next=sister;
    sister1->prev=myself;
    sister1->next=sister2;
    sister2->next=NULL;
    sister2->prev=sister1;

    printthelist(head);

    return 0;
}