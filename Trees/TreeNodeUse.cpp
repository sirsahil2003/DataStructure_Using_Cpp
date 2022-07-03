#include<iostream>
#include<vector>
#include<queue>
#include "TreeNode.h"

using namespace std;

int CountNodes(TreeNode<int>* root){
int count=1;
for(int i=1;i<root->children.size();i++){
 
 count += CountNodes(root->children[i]);

}
return count;

}


TreeNode<int>* takeInputLevelWise(){
int rootData;
cout<<"Enter data"<<endl;
cin>>rootData;

TreeNode<int> *root = new TreeNode<int>(rootData);

queue<TreeNode<int>*> pendingNodes;

pendingNodes.push(root);

while(pendingNodes.size()!=0){
TreeNode<int> *front = pendingNodes.front();
pendingNodes.pop();

cout<<"Enter num of children of:"<<front->data<<endl;

int numChild;
cin>>numChild;

for(int i=0;i<numChild;i++){

int childData;

cout<<"Enter "<<i<<" ith child of "<<front->data<<endl;
cin>>childData;



TreeNode<int> * child = new TreeNode<int>(childData);//we cant make static node bkz it will be deallocated after each iteration
front->children.push_back(child);
pendingNodes.push(child);
}


}
return root;

}



TreeNode<int>* takeInput(){
int rootData;
cout<<"Enter data"<<endl;
cin>>rootData;

TreeNode<int> *root = new TreeNode<int>(rootData);

int n;

cout<<"Enter num of children of"<<rootData<<endl;
cin>>n;

for(int i=0;i<n;i++){
TreeNode<int>* child = takeInput();
root->children.push_back(child);

}
return root;

}




void printTree(TreeNode<int> *root){

//edge case we need to handle this otherwise segmentation fault will occured
if(root==NULL){
return;
}

//in here we do not need to handle base case, automatically handeled
cout<<root->data<<":";

for(int i=0;i<root->children.size();i++){
cout<<root->children[i]->data<<",";
}

cout<<endl;

for(int i=0;i<root->children.size();i++){

printTree(root->children[i]);

}

}

int main(){


/*
TreeNode<int> *root = new TreeNode<int>(10);
TreeNode<int> *node1 = new TreeNode<int>(20);
TreeNode<int> *node2= new TreeNode<int>(30);



//we are pushing address of node 1 to the children array of ptrs
root->children.push_back(node1);  

root->children.push_back(node2);

*/

TreeNode<int>* root = takeInput();
cout<<CountNodes(root)<<endl;
//printTree(root);



}
