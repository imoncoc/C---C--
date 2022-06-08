#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

Node* newNode(int data){
    Node* temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void printPreOrder(struct Node* root){
    if(root == NULL) return;

    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}
int main(){
    struct Node* root = newNode(1);
    // Root left side
    root->left = newNode(2);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->left = newNode(6);

    //Root Right Side
    root->right = newNode(3);
    root->right->left = newNode(7);
    root->right->right = newNode(8);
    root->right->right->left = newNode(9);
    root->right->right->right = newNode(10);
    printPreOrder(root);


    return 0;
}

