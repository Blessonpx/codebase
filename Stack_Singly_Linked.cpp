// Below is an implementation of a Stack based on a singly Linked List
// Having a bsic of Pus and Pop Functions for the update
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
// Node class introduced
class Node {
    public:
    int value;
    Node* next;
};
// Declare Top ref for update Stack implementation
Node* Top ;
// Push happens from the head part only because it will give time complexity of O(1) instead of O(n) 
void Push(int i){
    // 1- allocate new Node 
    Node* new_node= new Node();
    // 2- Assign Value
    new_node->value=i;
    // 3- Assign head _ref to Next  of new node
    new_node->next=(Top);
    // 4- Assign Head_ref the new location
    (Top)=new_node;
} 
// Pop
// Pop happens again at the head level because of the time complexity of O(1)
// Pop has no argument because it deletes from top only
void Pop(){
    // 1- Make the Top Point towards the next node
    Top=Top->next; 
}
// Display
void Display(){
    Node* temp;
    temp=(Top);
    while (temp!=NULL){
        cout<<temp->value<<"::";
        temp=temp->next;
    }

}
// Display Mth from Last element
int length(){
    Node* temp;
    temp=Top;
    int j=0;
    while (temp!=NULL){
        j=j+1;
        temp=temp->next;
    }
    return j;
}

void Display_M_from_end(int m){
    int k=length();
    cout<<"\n"<<"Length: "<<k;
    k=k-m;
    cout<<"\n"<<"Element: "<<k;
    Node* temp;
    temp=Top;
    int i=0;
    while (i<k){
        temp=temp->next;
        i=i+1;
    }
    cout<<"\n"<<"M th Element from Last : "<<temp->value;
}


int main(){
    // Declare new Node for head_ref
    Push(7);
    Push(5);
    Push(6);
    Push(9);
    Push(99);
    Push(0);
    Push(1);
    Push(5);
    Display();
    Pop();
    cout<<"\n";
    Display();
    cout<<"\n";
    Display_M_from_end(4);
    return 0;
}
