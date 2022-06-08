#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int data){
    Node* temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;

}

void printInOrder(struct Node* root){
    if(root == NULL) return;
    printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);
}
int main(){
    struct Node* root = newNode(1);
    //Left Side
    root->left = newNode(2);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->left = newNode(6);
    //Right side
    root->right = newNode(3);
    root->right->left = newNode(7);
    root->right->right = newNode(8);
    root->right->right->left = newNode(9);
    root->right->right->right = newNode(10);

    printInOrder(root);

    return 0;
}
