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
// void lever_order(Node* node){
//     if(node == NULL){
//         cout << "Node NULL" << endl;
//         return;
//     }
//     queue<Node *> q;
//     q.push(node);
//     while(!q.empty()){
//         Node *node = q.front();
//         q.pop();
//         if(node->data != 0)
//             cout << node->data << " ";
//         if(node->left != NULL)
//             q.push(node->left);
//         if(node->right != NULL)
//             q.push(node->right);
//     }
// }
long long sumOfLeafRight(Node* node){
    if(node == NULL){
        return 0;
    }
    long long sum = 0;
    queue<Node *> q;
    q.push(node);
    while (!q.empty()) {
        Node* tmp = q.front();
        q.pop();
        if (tmp->left) {
            q.push(tmp->left);
        }
        if (tmp->right) {
            if (tmp->right->right == NULL &&  tmp->right->left == NULL) {
                sum += tmp->right->data;
            }
            q.push(tmp->right);
        }
    }
    return sum;
}
void insertNode(Node* root, int n){
    int val1, val2;
    char x = 'L';
    cin >> val1 >> val2 >> x;
    root = newNode(val1);
    vector<Node *> vtrNode;
    vtrNode.push_back(root);
    if (x == 'L'){
        root->left = newNode(val2);
        vtrNode.push_back(root->left);
    } else {
        root->right = newNode(val2);
        vtrNode.push_back(root->right);
    }
    for (int j = 2; j <= n;j++){
        cin >> val1 >> val2 >> x;
        for (int i = vtrNode.size() - 1; i >= 0; i--){
            if (vtrNode[i]->data == val1){
                if (x == 'L'){
                    vtrNode[i]->left = newNode(val2);
                    vtrNode.push_back(vtrNode[i]->left);
                }
                else{
                    vtrNode[i]->right = newNode(val2);
                    vtrNode.push_back(vtrNode[i]->right);
                }
                break;
            }
        }
    }
    cout << sumOfLeafRight(root) << endl;
}
void input(){
    int n;
    cin >> n;
    Node *root = NULL;
    insertNode(root, n);
}
int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){

        input();
    }
}