#include<iostream>
using namespace std;

class btree{
    public:

    int data;
    btree* left;
    btree* right;
    btree(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

};

void preOrder(btree* node){
    if(node==NULL){
        return;
    }
    else{
        cout<<node->data<<" ";
        preOrder(node->left);
        preOrder(node->right);
    }
}
void INOrder(btree* node){
    if(node==NULL){
        return;
    }
    else{
       
        preOrder(node->left);
         cout<<node->data<<" ";
        preOrder(node->right);

    }
}
void PostOrder(btree* node){

      if(node==NULL){
        return;
    }
    else{
       
        preOrder(node->left);
        preOrder(node->right);
         cout<<node->data<<" ";

    }

}

int max(int a, int b)
{
    int m= (a>b)?a:b;
    return m;
}
int HeightTree(btree *root)
{
    if(root==NULL)
    return 0;
    return(max(HeightTree(root->left), HeightTree(root->right)) +1);
}
void printTree(btree* root,int level){
    if(root==NULL){
        return;
    }
    if(level==1){
        cout<<root->data<<" ";
    }
    else if(level>1){
    printTree(root->left,level-1);
    printTree(root->right,level-1);
    }
}
void printLevelOrder(btree* root)
{
	int d = HeightTree(root);
	int i;
	for (i = 1; i <= d; i++)
		printTree(root, i);
}
int main(){
    btree *root = new btree(1);
    root->left = new btree(2);
    root->right = new btree(3);
    root->left->left = new btree(4);
    root->left->right = new btree(5);
    
    INOrder(root);
    cout<<endl;
    PostOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    printLevelOrder(root);
}