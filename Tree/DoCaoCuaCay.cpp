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
Tree* creatNode(int data){
    Tree *tree = new Tree();
    tree->data = data;
    tree->left = NULL;
    tree->right = NULL;
    return tree;
}
Tree *insertNode(Tree *root, int data, int parent){
    if(root == NULL){
        root = creatNode(parent);
        root->left = creatNode(data);
        return root;
    }
    queue<Tree *> q;
    q.push(root);
    while(!q.empty()){
        Tree *tmp = q.front();
        q.pop();
        if(tmp->data == parent){
            if(tmp->left == NULL){
                tmp->left = creatNode(data);
                return root;
            }
            else if (tmp->right == NULL){
                tmp->right = creatNode(data);
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
/*
int solution(Tree* node){
    if (node == NULL)
        return 0;
    else{
        int lDepth = solution(node->left);
        int rDepth = solution(node->right);
     
        if (lDepth > rDepth)
            return(lDepth + 1);
        else return(rDepth + 1);
    }
}
*/
int solution(Tree *tree){
    if(tree == NULL){
        return 0;
    }
    int level = 0;
    queue<Tree *> q;
    q.push(tree);
    while(!q.empty()){
        int size = q.size();
        level++;
        while (size > 0){
            Tree *tmp = q.front();
            q.pop();
            if(tmp->left != NULL){
                q.push(tmp->left);
            }
            if(tmp->right != NULL){
                q.push(tmp->right);
            }
            size--;
        }
    }
    return level - 1;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int parent, data;
        Tree *root = NULL;
        for (int i = 0; i < n - 1;i++){
            cin >> parent >> data;
            root = insertNode(root, data, parent);
        }
        // PosOrder(root);
        cout << solution(root) << endl;
    }
}