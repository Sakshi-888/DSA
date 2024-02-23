#include <bits/stdc++.h>
using namespace std;
//****************** Representation of  doubly linked-list********************
class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

//****************** Converting an array into doubly linked-list******************

Node *convertArr2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

//****************** Deleting the head of the doubly linked-list******************
Node *deleteHead(Node *head)
{
    Node *prev = head;
    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;
    delete prev;

    return head;
}

//****************** Deleting the head of the doubly linked-list******************
Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *newTail = tail->back;
    newTail->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}

//****************** Deleting the k'th element of the doubly linked-list******************
Node *deleteKthElement(Node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    int cnt = 0;
    Node *kNode = head;
    while (kNode != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        kNode = kNode->next;
    }
    Node *prev = kNode->back;
    Node *front = kNode->next;

    if (prev == NULL && front == NULL)
    {
        return NULL;
    }

    else if (prev == NULL)
    {
        return deleteHead(head);
    }

    else if (front == NULL)
    {
        return deleteTail(head);
    }

    prev->next = front;
    front->back = prev;

    kNode->next = nullptr;
    kNode->back = nullptr;
    delete kNode;

    return head;
}

//****************** Deleting the given node of the doubly linked-list******************

void deleteNode(Node *temp)
{
    Node *prev = temp->back;
    Node *front = temp->next;

    if (front == NULL)
    {
        prev->next = nullptr;
        front->back = nullptr;
        delete temp;
        return;
    }

    prev->next = front;
    front->back = prev;

    temp->next = temp->back = nullptr;
    delete temp;
}

//****************** Inserting before head in doubly linked-list******************

Node *insertBeforeHead(Node *head, int val)
{
    Node *newHead = new Node(val, head, nullptr);
    head->back = newHead;
    return newHead;
}

//****************** Inserting before tail in doubly linked-list******************

Node *insertBeforTail(Node *head, int val)
{
    if (head->next == NULL)
    {
        return insertBeforeHead(head, val);
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *prev = tail->back;
    Node *newNode = new Node(val, tail, prev);
    prev->next = newNode;
    tail->back = newNode;

    return head;
}

//****************** Inserting before k'th element in doubly linked-list******************

Node *insertBeforeKthElement(Node *head, int k, int val)
{
    if (k == 1)
    {
        return insertBeforeHead(head, val);
    }

    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}

//****************** Inserting before a given node in doubly linked-list******************

void insertBeforeGivenNode(Node*node,int val)
{
    Node* prev=node->back;
    Node* newNode=new Node(val,node,prev);
    prev->next=newNode;
    node->back=newNode;

}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node *head = convertArr2DLL(arr);

    insertBeforeGivenNode(head->next,100);
    print(head);
    return 0;
}
