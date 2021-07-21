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
void posOrder(Tree* node){
    if (node == NULL)
        return;
    //     if(node->data != 0)
    // cout << node->data << " ";
    posOrder(node->left);
    posOrder(node->right);
    if(node->data != 0)
    cout << node->data << " ";
}
Tree *insertNode(Tree *node, int val){
    if(node == NULL) node = createNode(val);
    if(node->data < val){
        node->right = insertNode(node->right, val);
    }else if(node->data > val){
        node->left = insertNode(node->left, val);
    }
    return node;
}
void input(){
    int n;cin >> n;
    int a[n];
    for (int i = 0; i < n;i++) cin >> a[i];
    Tree *tree = new Tree();
    for (int i = 0; i < n;i++){
        tree = insertNode(tree, a[i]);
    }
    posOrder(tree);
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