#include "binarytrees.h"
#include<iostream>
#include<conio.h>
using namespace std;

BinaryTrees::BinaryTrees(TreeNode* initialroot)
{

    root =initialroot;

}


void BinaryTrees:: print(){

    printhelper(root);

}


void BinaryTrees :: printhelper(TreeNode * node){
    // There is a implicit base case in which if there is a node which is nu
    if(node!=NULL){



        printhelper(node->left);
        cout<<node->data<<endl;
        printhelper(node->right);


    }
}
