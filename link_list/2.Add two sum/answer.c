/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* l3=NULL, *p1=l1,*p2=l2,*p3=l3,*p3_prev=NULL ;
    int carry = 0 , turn = 0;  
    while(p1 || p2 || carry){
        int val1=0, val2=0, val3=0;
        if(p1){
	      val1 = p1->val;
	      p1 = p1->next; 
	    }
        if(p2){
	      val2 = p2->val;
	      p2 = p2->next; 
	    }
        // pervious carry value plus together before status.
        val3= val1 + val2 + carry;
        // need to check whether  p1 plus p2 carry.
        carry= val3 / 10;
        // locate p3 size 
        p3 = (struct ListNode *) malloc(sizeof(struct ListNode)); 
        // input new value.
	    p3->val = val3 % 10;
	    p3->next = NULL;
        // Linked value to struct.
        if(!turn){
            l3=p3;
        } else{
            p3_prev->next = p3;
        }
        p3_prev = p3;
        turn++;   
    }
    return l3;
}