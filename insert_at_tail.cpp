// #include<bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void insert_at_tail(Node* &head, int val)
// {
//     Node* newNode = new Node(val);
//     Node* tmp = head;
//     while(tmp->next != NULL){
//         tmp = tmp->next;
//     }
//     tmp->next = newNode; 
// };

// void print_linked_list(Node* head){ 
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->val << endl;
//         temp = temp->next;
//     }
// };

// int main()
// {
//     Node* head = new Node(10);
//     Node* a = new Node(20);
//     Node* b = new Node(30);

//     head->next = a;
//     a->next = b;

//     insert_at_tail(head, 100);
//     print_linked_list(head);

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, int val)
{

    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode; 
};

void print_linked_list(Node* head){ 
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
};

int main()
{
    Node* head = NULL;
    // Node* head = new Node(10);
    // Node* a = new Node(20);
    // Node* b = new Node(30);

    // head->next = a;
    // a->next = b;

    insert_at_tail(head, 100);
    print_linked_list(head);

    return 0;
}