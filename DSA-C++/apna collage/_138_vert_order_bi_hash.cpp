// if parent =i ; left son=2i+1     right son=2i+2
#include<bits/stdc++.h>
using namespace std; 

struct Node{
    int key;
    Node *left,*right;
};

Node* newNode(int key){
    Node* node=new Node;
    node->key=key;
    node->left=node->right=NULL;
    return node;
}

int main()
{


return 0;
}

//4:55