int sum (Node *root,int X,int &count){
    if (root == NULL) return 0;
	int curr = root->data + sum(root->left, X,count) + sum(root->right, X,count);
	if (curr == X)
	    count++;
	return curr;
}
//Function to count number of subtrees having sum equal to given sum.
int countSubtreesWithSumX(Node* root, int X)
{
    int count = 0;
	sum(root,X,count);
	return count;
}
