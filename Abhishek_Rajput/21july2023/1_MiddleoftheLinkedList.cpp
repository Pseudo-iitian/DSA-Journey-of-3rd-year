#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* middleNode(ListNode* head) {
    vector<ListNode*> temp;            
    int count = 0;                      
    while(head!=NULL){
        temp.push_back(head);           

        head=head->next;
        count++;
    }
    return temp[count/2];
}

int main(){
    
        //creating a new Linked-List.
        ListNode* list = new ListNode();
        ListNode* head = list;
        for(int i =1;i<=5;i++){
           list->next = new ListNode(i);
           list = list->next;
        }
        ListNode* ans = middleNode(head->next);
        cout<<ans->val<<endl;
        return 0;
}
