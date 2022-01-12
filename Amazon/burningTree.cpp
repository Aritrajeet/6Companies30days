class Solution {
  public:
    
int a;
void down(Node* root,int ti){
   if(root==nullptr)
       return ;
   a=max(a,ti);
   down(root->left,ti+1);
   down(root->right,ti+1);
}
int solve(Node* root,int tar,int ti){
   if(root==nullptr)
       return -1;
   if(root->data==tar){
       down(root,0);
       return 0;
   }
   int l = solve(root->left,tar,ti+1);
   if(l!=-1){
       a=max(a,ti);
       down(root->right,l+2);
       return l+1;
   }
   
   int r = solve(root->right,tar,ti+1);
   if(r!=-1){
       a=max(a,ti);
       down(root->left,r+2);
       return r+1;
   }
   return -1;
}
int minTime(Node* root, int target) 
{
   // Your code goes here
   a=INT_MIN;
   solve(root,target,0);
   return a;
}
};
