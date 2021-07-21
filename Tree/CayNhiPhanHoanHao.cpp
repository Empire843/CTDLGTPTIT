//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define reset(a) memset(a,0,sizeof(a))
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
struct Node{
    int data;
    struct Node *left, *right;
};
Node* newNode(int data){
    Node* node = new Node();
    if(!node){
        return NULL;
    }
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
Node* insertNode(Node* root, int data, char x, int v){
    if(root == NULL){
        root = newNode(data);
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty()){
        Node *tmp = q.front();
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
string PerfectTree(Node *node){
    if(node == NULL){
        return "No";
    }
    int level_leaf = 0;
    int leaf_tmp = -1;
    queue<Node *> q;
    q.push(node);
    while(!q.empty()){
        int size = q.size();
        level_leaf++;
        while(size > 0){
            Node *node = q.front();
            q.pop();
            // check child node
            if(node->left == NULL && node->right != NULL){
                return "No";
            }
            if(node->right == NULL && node->left != NULL){
                return "No";
            }

            // check level leaf
            if(node->left == NULL && node->right == NULL){
                if(leaf_tmp == -1){
                    leaf_tmp = level_leaf;
                }else if(leaf_tmp != level_leaf){
                    return "No";
                }
            }
            // cout << node->left->data << " " << node->right->data << endl;
            if(node->left != NULL && node->right != NULL){
                q.push(node->left);
                q.push(node->right);
            }
            size--;
        }
    }
    return "Yes";
}
void input(){
    int u, v;
    char x;
    int n;
    cin >> n;
    Node *root = NULL;
    for (int i = 0; i < n;i++){
        cin >> u >> v >> x;
        root = insertNode(root, u, x, v);
    }
    cout << PerfectTree(root) << endl;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        input();
    }
}