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

bool BinaryTrees ::contains(int checkdata){

    return containshelper(checkdata, root);

}

bool BinaryTrees :: containshelper(int checkdata, TreeNode * node){


    if (node==NULL){
        return false;
    }
    else if(checkdata==node->data){
        return true;
    }

    else{
        return containshelper(checkdata,node->left)||
                containshelper(checkdata,node->right);


    }
}

void BinaryTrees :: printhelper(TreeNode * node){
    // There is a implicit base case in which if there is a node which is nu
    if(node!=NULL){


        //If you are printing at the top then it is pre-order

        printhelper(node->left);


        cout<<node->data<<endl;

        //If it is in the middle then it is in-order

        printhelper(node->right);



        //If it is in the end then it is post order


    }


}
void BinaryTrees :: printsideways(){
    string len="";
    printhelpersideways(root,""+len);

}
void BinaryTrees :: printhelpersideways(TreeNode * Node, string len){

    if(Node!=NULL){

            printhelpersideways(Node->left,len+"    ");
            cout<<len<<Node->data<<endl;
            printhelpersideways(Node->right,len+"    ");

        }
}
