
//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
struct Tree{
    int data;
    Tree *left, *right;
};
Tree* createNode(int data){
    Tree* node = new Tree();
    if(!node){
        return NULL;
    }
    node->data = data;
    node->right = NULL;
    node->left = NULL;
    return node;
}
void preOrder(Tree* node){
    if (node == NULL)
        return;
    if(node->left == NULL && node->right == NULL){
        cout << node->data << " ";
    }
    preOrder(node->left);
    preOrder(node->right);
}
Tree *insertNode(Tree *node, int val){ // PreOrder
    if(node == NULL) node = createNode(val);
    if(node->data < val){
        node->right = insertNode(node->right, val);
    }else if(node->data > val){
        node->left = insertNode(node->left, val);
    }
    return node;
}
// void leafNode(Tree *node){
    
//     queue<Tree *> q;
//     q.push(node);
//     while(!q.empty()){
//         Tree *tmp = q.front();
//         q.pop();
//         if(tmp->left == NULL && tmp->right == NULL){
//             cout << tmp->data << " ";
//         }
//         if(tmp->left != NULL){
//             q.push(tmp->left);
//         }
//         if(tmp->right != NULL)
//             q.push(tmp->right);
//     }
// }
void input(){
    int n;cin >> n;
    int a[n];
    for (int i = 0; i < n;i++) cin >> a[i];
    Tree *tree = new Tree();
    for (int i = 0; i < n;i++){
        tree = insertNode(tree, a[i]);
    }
    preOrder(tree);
    // cout << endl;
    // leafNode(tree);
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        input();
        cout << endl;
    }
}