  int sum (Node *node){
        if(!node) return NULL;
        int curr_data = node->data;
        node->data = sum(node->left) + sum(node->right);
        return curr_data + node->data;
  }
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        sum(node);
    }
