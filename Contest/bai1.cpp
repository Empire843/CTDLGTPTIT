//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
struct Tree{
    int data;
    struct Tree *left, *right;
};
Tree* newNode(int data){
    Tree *node = new Tree();
    node->data = data;
    node->right == NULL, node->left = NULL;
    return node;
}
Tree* insertNode(Tree* node, int data, char x, int root){
    if(node == NULL){
        node = newNode(root);
    }
    queue<Tree *> q;
    q.push(node);
    while(!q.empty()){
        Tree *tmp = q.front();
        q.pop();
        if(tmp->data == root){
            if(x == 'L' && tmp->left == NULL){
                tmp->left = newNode(data);
                return node;
            }else if(x == 'R' && tmp->right == NULL){
                tmp->right = newNode(data);
                return node;
            }
        }else {
            if (tmp->left != NULL)
                q.push(tmp->left);
            if (tmp->right != NULL)
                q.push(tmp->right);
        }
    }
    return node;
}
void level_order(Tree* root){
    if(root == NULL)
        return;
    queue<Tree *> q;
    q.push(root);
    while(!q.empty()){
        Tree *node = q.front();
        q.pop();
        if(node->data != 0)
            cout << node->data << " ";
        if(node->left != NULL){
            q.push(node->left);
        }
        if(node->right != NULL){
            q.push(node->right);
        }
    }
    cout << endl;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n, data, root;
        char x;
        cin >> n;
        Tree *node = NULL;
        for (int i = 0; i < n;i++){
            cin >> root >> data >> x;
            node = insertNode(node, data, x, root);
        }
        level_order(node);
    }
}