/*
 * Author:
 * Date:
 * Name:
 */

#include <cstddef>
class Problem1 {
    struct ListNode {
            int val;
           ListNode *next;
           ListNode() : val(0), next(nullptr) {}
           ListNode(int x) : val(x), next(nullptr) {}
           ListNode(int x, ListNode *next) : val(x), next(next) {}
         };
public:




    ListNode* mergeNodes(ListNode* head) {
        ListNode* cur= head;
        ListNode* newHead= NULL;
        int sum=0;
        while(cur!=NULL){

            if(cur->val !=0){
                sum+=cur->val;
            }
            else if(sum!=0 && cur->val==0){
                ListNode* node= new ListNode(sum);
                if(newHead==NULL){
                    newHead=node;
                    head=node;
                    sum=0;

                }
                else{

                    newHead->next=node;
                    newHead=newHead->next;
                    sum=0;

                }
            }
            cur=cur->next;
        }
        return head;
    }
};