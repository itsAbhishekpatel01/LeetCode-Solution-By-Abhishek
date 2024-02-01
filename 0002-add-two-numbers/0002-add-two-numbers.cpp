/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

ListNode* insertTail(ListNode* head, int val){
    ListNode* newNode = new ListNode(val,nullptr);
    if(head==NULL) return new ListNode(val,nullptr);
    ListNode* temp = head;
    while(temp->next!=NULL) temp=temp->next;
    temp->next = newNode;
    return head;
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* num1 = l1;
        ListNode* num2 = l2;
        ListNode* ans=nullptr;
        int sum=0;
        int carry=0;
        while(num1 && num2){
            sum=carry;
            carry=0;
            sum += (num1->val + num2->val);
            if(sum>9){
                carry = sum/10;
                sum = sum%10;
            }
            ans = insertTail(ans,sum);
            num1 = num1->next;
            num2 = num2->next;
        }
        while(num1){
            sum=carry;
            carry=0;
            sum += num1->val;
            if(sum>9){
                carry = sum/10;
                sum = sum%10;
            }
            ans = insertTail(ans,sum);
            num1 = num1->next;
        }
        while(num2){
            sum=carry;
            carry=0;
            sum += num2->val;
            if(sum>9){
                carry = sum/10;
                sum = sum%10;
            }
            ans = insertTail(ans,sum);
            num2 = num2->next;
        }
        if(carry)
        ans = insertTail(ans,carry);
        return ans;
    }
};