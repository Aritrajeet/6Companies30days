//Level order traversal and using temp pointer.
void connect(Node *root)
    {
       queue<Node*> q;
       q.push(root);
       while(!q.empty()){
           Node* temp = NULL;
           int size=q.size();
           while(size--){
               auto curr=q.front();
               q.pop();
               if(curr->left!=NULL){
                   q.push(curr->left);
               }
               if(curr->right!=NULL){
                   q.push(curr->right);
               }
               if(temp == NULL){
                   temp = curr;
               }else{
                   temp->nextRight = curr;
                   temp = temp->nextRight;
               }
           }
       }
    }        
