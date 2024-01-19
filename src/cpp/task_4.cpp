/*
 * Author:
 * Date:
 * Name:
 */

class Problem4 {
    public:
        ListNode* mergeNodes(ListNode* head) {
                ListNode* cur= head;
                ListNode* newHead= NULL;
                    int sum=0;
                    while(cur!=NULL){
                        ewHead->next;
                                sum=0;if(cur->val !=0){
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
                                        newHead=n

                            }
                        }
                        cur=cur->next;
                    }
                    return head;
            }

};