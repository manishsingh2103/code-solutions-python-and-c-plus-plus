https://leetcode.com/problems/add-two-numbers/submissions/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 =nullptr;
        ListNode* l4 =l3;
        int carry=0;
        
        while(l1!=NULL && l2!=NULL )
        { 
            ListNode* temp= new ListNode((l1->val+l2->val+carry)%10);
            //cout<<temp->val;
            carry=(l1->val+l2->val+carry)/10;
            if(l3==nullptr)
            { l3=temp;l4 =l3;}
            else
            {l3->next=temp;l3=l3->next;}
            
            l1=l1->next;
            l2=l2->next;
        }
        
        if(l2!=NULL)
        {
            while(l2!=NULL)
            {
                ListNode* temp=new ListNode((l2->val+carry)%10);
                carry =(l2->val+carry)/ 10;
               if(l3==nullptr)
           { l3=temp;l4 =l3;}
            else
                {l3->next=temp;l3=l3->next;}
               
                l2=l2->next;
               
                
            }
        }
        
          if(l1!=NULL)
          {
            
            while(l1!=NULL)
            {
                ListNode* temp=new ListNode((l1->val+carry)%10);
                 carry =(l1->val+carry)/ 10;
               if(l3==nullptr)
           {l3=temp;l4 = l3;}
            else
               {l3->next=temp;l3=l3->next;}
                
                l1=l1->next;
                
            }
          }
        while(carry>0)
        { ListNode* temp= new ListNode(carry%10); carry /= 10;l3->next=temp;l3=l3->next;}
        
   return l4; 
    }
};