
// https://www.hackerrank.com/challenges/ctci-is-binary-search-tree/problem


/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
    bool isBSTUtil(Node *root, int min, int max)
    {
        if(!root)
            return true;
        return (root->data > min && root->data < max && isBSTUtil(root->left, min, root->data) && isBSTUtil(root->right, root->data, max));
        
    }

    bool checkBST(Node* root) 
    {
        int min = -1000000007, max = 1000000007;
        return isBSTUtil(root, min, max);
    }



