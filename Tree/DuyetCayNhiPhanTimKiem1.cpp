//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define input(a, n) for (int i = 0; i < n; i++) cin >> a[i]
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
struct Tree{
    int data;
    struct Tree *left, *right;
};
Tree *creatNode(int data){
    Tree *node = new Tree();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
void PosOrder(Tree *node){
    if (node != NULL){
        PosOrder(node->left);
        PosOrder(node->right);
        cout << node->data << " ";
    }
}
Tree *buildTree(int data, Tree*root){
    if(root == NULL){
        root = creatNode(data);
        return root;
    }
    queue<Tree *> q;
    q.push(root);
    while (!q.empty()){
        Tree *tmp = q.front();
        q.pop();
        if (tmp->data >= data){
            if (tmp->left == NULL){
                tmp->left = creatNode(data);
                return root;
            }
            else{
                q.push(tmp->left);
            }
        }else {
            if (tmp->right == NULL){
                tmp->right = creatNode(data);
                return root;
            }
            else{
                q.push(tmp->right);
            }
        }
    }
    return root;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int pre[n];
        input(pre, n);
        Tree *root = NULL;
        for (int i = 0; i < n;i++){
            root = buildTree(pre[i], root);
        }
        PosOrder(root);
        cout << endl;
        // cout << root->data << " ";
        // << root->left->data << " "
        // << root->right->data << " ";
        // << root->left->right->data << " "
        // << root->right->right->data << " ";
    }
}