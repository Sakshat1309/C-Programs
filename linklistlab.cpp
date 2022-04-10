#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        head = n;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void deleteAtTail(node *&head)
{

    node *toDelete;
    node *temp = head;
    node *temp2 = head;

    if(head==NULL){
        cout<<"no element to delete"<<endl;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    toDelete = temp;

    while (temp2->next->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = NULL;

    delete toDelete;
}
void deleteAtPos(node *&head, int pos)
{
    node *todelete;
    node *temp = head;
    int x = 1;
    if(head==NULL){
        cout<<"no element to delete"<<endl;
        return;
    }

    while (x != pos)
    {
        temp = temp->next;
        x++;
    }
    temp->next = temp->next->next;
    todelete = temp->next;
    delete todelete;
}
void insertAfter(node *&head, int val2, int val)
{
    node *n = new node(val);
    int key = val2;
    node *temp = head;
    while (temp->data != key || temp->next!=NULL)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}
void insertBefore(node *&head, int val2, int val)
{
    node *n = new node(val);
    int key = val2;
    node *temp = head;
    while (temp->next->data != key || temp->next!=NULL)
    {
        temp = temp->next;
    }
    if(temp->next==NULL){
        cout<<"element does not exist please re enter "<<endl;
        return;
    }
    n->next = temp->next;
    temp->next = n;
}
void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    int x, y;
    node* head = NULL;

    cout << "Enter the element to initialise the list" << endl;
    cin >> x;
    insertAtTail(head, x);
   

   while(1){
       cout << "1.INSERT\n2.DELETE AT POS \n3.INSERT AT HEAD\n4.DELETE AT TAIL\n5.INSERT AFTER \n6. INSERT BEFORE \n7.DISPLAY\n8.EXIT " << endl;
    cin >> y;
    switch (y)
    {
    case 1:
        int ele;
        cout << "enter element to be inserted" << endl;
        cin >> ele;
        insertAtTail(head, ele);
        break;

    case 2:
        int pos;

        cout << "enter position of deletion" << endl;
        cin >> pos;
        deleteAtPos(head, pos);
        break;

    case 3:
        int ele1;
        cout << "enter element to be inserted" << endl;
        cin >> ele1;
        insertAtHead(head, ele1);
        break;

    case 4:
        deleteAtTail(head);
        break;
    case 5:
        int ele2, key1;
        cout << "enter element to be inserted" << endl;
        cin >> ele2;
        cout << "enter element after which it should be inserted" << endl;
        cin >> key1;
        insertAfter(head, key1, ele2);
        break;
    case 6:
       int ele3, key2;
        cout << "enter element to be inserted" << endl;
        cin >> ele3;
        cout << "enter element before which it should be inserted" << endl;
        cin >> key2;
        insertAfter(head, key2, ele3);
        break;
    case 7:
       display(head);
       break;
    case 8:
       exit(0);
    }
   }
}