/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        int cnt=0;
        if(head== null|| head.next==null|| k==0){
            return head;
        }
        ListNode temp = head;
        while(temp!=null){
            temp = temp.next;
            cnt++;
        }
        
        if(cnt<=k){
            k = k%cnt;
        }
        if(k==0)  return head;
        
         ListNode p = head;
         ListNode c = head;
        for(int i=0 ; i<cnt-k; i++){
            p = c;
            c= c.next;
        }
        p.next=null;
        
        ListNode head2 = c;
         
        while(c.next!=null){
            c=c.next;
        }
        
        c.next = head;
        
        return head2;
        
        
        
        
    }
}