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
    if(!node){
        return NULL;
    }
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
Tree* insertNode(Tree* root, int data, char x, int v){
    if(root == NULL){
        root = newNode(data);
    }
    queue<Tree *> q;
    q.push(root);
    while (!q.empty()){
        Tree *tmp = q.front();
        q.pop();
        if(tmp->data == data){
            if(x == 'L' && tmp->left == NULL){
                tmp->left = newNode(v);
                return root;
            }
            else if (x == 'R' && tmp->right == NULL){
                tmp->right = newNode(v);
                return root;
            }
        }else{
            if (tmp->left != NULL)
                q.push(tmp->left);
            if (tmp->right != NULL)
                q.push(tmp->right);
        }
    }
    return root;
}
int solution(Tree *tree1, Tree *tree2){
    if(tree1 == NULL && tree2 == NULL){
        return 1;
    }
    if(tree1 != NULL && tree2 != NULL){
        return (tree1->data == tree2->data && 
        solution(tree1->left, tree2->left) && 
        solution(tree1->right, tree2->right));
        // trả về 1 nếu cả 3 điều kiện phía trên đều đúng
        // nếu 1 trong 3 sai thì trả về 0
    }
    return 0;
}
void input(){
    int u, v;
    char x;
    int n;
    cin >> n;
    Tree *root1 = NULL;
    for (int i = 0; i < n;i++){
        cin >> u >> v >> x;
        root1 = insertNode(root1, u, x, v);
    }
    Tree *root2 = NULL;
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> u >> v >> x;
        root2 = insertNode(root2, u, x, v);
    }
    cout << solution(root1, root2) << endl;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        input();
    }
}