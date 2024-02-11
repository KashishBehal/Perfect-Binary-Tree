class Solution
{
public:
int minHeight(Node * root){
    if(root==NULL)
{
    return 0;
}
int l=minHeight(root->left);
int r=minHeight(root->right);
return max(l , r)+1;
}
int maxHeight(Node * root){
    if(root==NULL)
{
    return 0;
}
int l=maxHeight(root->left);
int r=maxHeight(root->right);
return min(l , r)+1;
}
    bool isPerfect(Node *root)
    {
        return minHeight(root)==maxHeight(root);
    }
};
