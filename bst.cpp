#include "bst.h"
#include<string>
#include<iostream>
using namespace std;
BST::BST()
{
    root=NULL;
}
BST::~BST(){

}

void BST::add(int value){
    addhelper(root,value);
}
void BST :: printsideways(){
    string len="";
    printhelpersideways(root,""+len);

}
void BST :: printhelpersideways(TreeNode * Node, string len){

    if(Node!=NULL){

            printhelpersideways(Node->left,len+"    ");
            cout<<len<<Node->data<<endl;
            printhelpersideways(Node->right,len+"    ");

        }
}
void BST::addhelper(TreeNode * &node , int value){
    if(node==NULL){
        node=new TreeNode(value);
    }else if(node->data<value)
            addhelper(node->right,value);
     else if(node->data>value)
            addhelper(node->left,value);


}
void BST :: getmin(){
    getminHelper( root);

}
void BST :: getminHelper(TreeNode *  node){
    if ((node->left)==NULL){
        cout<< node->data;

    }
else
    getminHelper(node->left);
}
