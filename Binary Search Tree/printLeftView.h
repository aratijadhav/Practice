void leftViewUtil(struct node *root, int level, int *max_level) 
{ 
    // Base Case 
    if (root==NULL)  return; 
  
    // If this is the first node of its level 
    if (*max_level < level) 
    { 
        printf("%d\t", root->data); 
        *max_level = level; 
    } 
  
    // Recur for left and right subtrees 
    leftViewUtil(root->left, level+1, max_level); 
    leftViewUtil(root->right, level+1, max_level); 
} 
  
// A wrapper over leftViewUtil() 
void leftView(struct node *root) 
{ 
    int max_level = 0; 
    leftViewUtil(root, 1, &max_level); 
}