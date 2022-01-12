class Solution
{
   public:
   void linkdelete(struct Node  *head, int M, int N)
   {
       struct Node *p;
       struct Node *q;
       p=head;
       while(1){
           for(int i=0; i<M-1 ;i++){
               if(p==NULL)
                   return;
               p=p->next;
           }
           if(p==NULL)
               return;
           q=p;
           for(int i=0; i<N ;i++){
               if(q==NULL){
                   p->next=NULL;
                   return;
               }
               q=q->next;
           }
           if(q==NULL){
                   p->next=NULL;
                   return;
               }
           p->next=q->next;
           p=q->next;
       }
       return;
   }
};
