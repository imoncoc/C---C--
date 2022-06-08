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

int findMin(Node* root){
    if(root == NULL){
        cout<<"Error: Tree is empty"<<endl;
        return -1;
    }
    while(root->left != NULL){
        root = root->left;
    }
    cout<<"Minimum element is : "<<root->data<<endl;
    return root->data;
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
    insertBST(root, 10);

    findMin(root);
    return 0;
}

