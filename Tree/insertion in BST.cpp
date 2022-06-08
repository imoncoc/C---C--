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

Node* insertBST(Node* root, int data){
    if(root == NULL){
        return newNode(data);
    }
    if(data < root->data){
        root->left = insertBST(root->left, data);
    }
    else if(data > root->data){
        root->right = insertBST(root->right, data);
    }

    return root;
}
int main(){
    struct Node* root = NULL;
    root = insertBST(root, 50);
    insertBST(root, 30);
    insertBST(root, 20);
    insertBST(root, 40);
    insertBST(root, 70);
    insertBST(root, 60);
    insertBST(root, 80);

    printInOrder(root);
    return 0;
}
