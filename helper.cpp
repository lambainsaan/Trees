#include "binarytrees.h"
#include<iostream>

using namespace std;

int main(){

    TreeNode* node= new TreeNode(42);
    node->left=new TreeNode(59);
    node->left->left=new TreeNode(22);
    node->left->right=new TreeNode(64);
    node->right=new TreeNode(27);
    node->right->right=new TreeNode(86);
    node->right->left=new TreeNode(32);
    node->right->right->left=new TreeNode(-1);
    BinaryTrees tree(node);
    cout<<"=============Tree=============="<<endl;
    tree.print();

    cout<<endl;



    tree.printsideways();
//    cout<<"===========Contains============"<<endl;
//    cout<<"Contains 27?     "<<boolalpha<<tree.contains(27)<<endl;
//    cout<<"Contains 86?     "<<tree.contains(86)<<endl;
//    cout<<"Contains 33?     "<<tree.contains(33)<<endl;
//    cout<<"Contains -99?    "<<tree.contains(-99)<<endl;
//    cout<<"Contains 1?      "<<tree.contains(1)<<endl;
//    cout<<"Contains 42?     "<<tree.contains(42)<<endl;

    return 0;

}
