#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count=0;
        ListNode*curr=head;
        while(count<k && curr != NULL){
            curr=curr->next;
            count++;
        }
        if(count==k){
            ListNode * pre=NULL;
            ListNode*curr=head;
            
            for(int i=0;i<k;i++){
                ListNode* forward=curr->next;
                curr->next=pre;
                pre=curr;
                curr=forward;
            }
            head->next=reverseKGroup(curr,k);
            return pre;
        }
        return head;
    }
};

//  https://leetcode.com/problems/reverse-nodes-in-k-group/