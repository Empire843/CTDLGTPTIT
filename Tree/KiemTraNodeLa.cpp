//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
struct Node{
    int data;
    struct Node *right;
    struct Node *left;
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
int leafLevel_node(Node* node){
    if(node == NULL){
        return 0;
    }
    int level = -1;
    int leafLevel = 0;
    queue<Node *> q;
    q.push(node);
    while(!q.empty()){
        leafLevel++;
        int levelParent = q.size();
        while(levelParent > 0){
            Node *node = q.front();
            q.pop();
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
            // cout << node->data << " "  << leafLevel << " " << node->right << endl;
            if(node->left == NULL && node->right == NULL){
                if(level == -1){
                    level = leafLevel;
                }else if(level != leafLevel){
                    return 0;
                }
            }
            levelParent--;
        }
    }
    return 1;
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
    cout << leafLevel_node(root) << endl;
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        input();
    }
}