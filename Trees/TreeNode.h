#include<vector>
using namespace std;

template <typename T>
class TreeNode{

public:
T data;
vector<TreeNode<T>*> children;   //array of pointers of node of type of root 


TreeNode(T data){
this->data = data;
}

};
