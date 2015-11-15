#include <cstddef>
#include<string>


#ifndef BINARYTREES_H
#define BINARYTREES_H

struct TreeNode{
    int data;
    TreeNode * left;
    TreeNode * right;

    TreeNode(int data,
             TreeNode* left= NULL,
             TreeNode* right= NULL){
        this ->data= data;
        this ->left= left;
        this ->right=right;

    }
    TreeNode();


};


class BinaryTrees
{
private :


public:
   BinaryTrees(TreeNode*);
   bool contains(int);
   void printsideways();
   void print();

private:
    bool containshelper(int,TreeNode*);
    void printhelpersideways(TreeNode *, std::string);
    void printhelper(TreeNode *);
   TreeNode * root;

};

#endif // BINARYTREES_H
