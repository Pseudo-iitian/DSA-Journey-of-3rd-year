#include <iostream>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode()
    {
        this->data = 0;
        this->next = NULL;
    }
    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtLast(ListNode *&head, ListNode *&tail, int data)
{
    ListNode *newNode = new ListNode(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

ListNode* reverseLinkedList(ListNode* &head){
    ListNode* prev = NULL;
    ListNode* curr = head;
    while(head!=NULL){
        head = head->next;
        curr->next = prev;
        prev = curr;
        curr = head;
    }
    return prev;
}
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int c = 0;
    ListNode* newHead = new ListNode();
    ListNode* temp = newHead;
    while(l1!=NULL || l2!=NULL || c!=0){
        int sum = 0;
        if(l1!=NULL){
            sum+=l1->data;
            l1=l1->next;
        }
        if(l2!=NULL){
            sum+=l2->data;
            l2=l2->next;
        }
        sum+=c;
        c=sum/10;
        ListNode* newNode = new ListNode(sum%10);
        temp->next = newNode;
        temp = newNode;
    }
    return newHead->next;
}

void print(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    ListNode *head1 = NULL;
    ListNode *tail1 = NULL;
    ListNode *head2 = NULL;
    ListNode *tail2 = NULL;

    // head1
    insertAtLast(head1, tail1, 7);
    insertAtLast(head1, tail1, 2);
    insertAtLast(head1, tail1, 4);
    insertAtLast(head1, tail1, 3);
    ListNode* first = reverseLinkedList(head1);
    // head2
    insertAtLast(head2, tail2, 5);
    insertAtLast(head2, tail2, 6);
    insertAtLast(head2, tail2, 4);
    ListNode* second = reverseLinkedList(head2);

    ListNode *ans = addTwoNumbers(first,second);
    ListNode* rev = reverseLinkedList(ans);
    print(rev);
    return 0;
}