#include <cstddef>
#include<string>

#ifndef BST_H
#define BST_H
//struct BSTNode{
//    BSTNode(){

//    }
//};
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
};
class BST
{
public:
    BST();
    ~BST();
    void add(int);
    void getmin();
    void printsideways();
private:
    void getminHelper(TreeNode * node);
    void addhelper(TreeNode * &, int);
    TreeNode * root;
    void printhelpersideways(TreeNode * Node, std::string len);

};

#endif // BST_H
