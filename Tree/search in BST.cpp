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

bool searchBST(Node* root, int data){
if(root == NULL){
   return false;
   }
    else if(root->data == data){
        return true;
    }
    else if(data <= root->data){
        return searchBST(root->left, data);
    }
    else{
        return searchBST(root->right, data);
    }
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

    int number;
    cout<<"Enter number be searched : ";
    cin>>number;

    if(searchBST(root, number) == true){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }


    return 0;
}

