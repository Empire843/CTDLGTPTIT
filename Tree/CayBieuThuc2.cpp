//  @author: (☞ﾟヮﾟ)☞  <->  ☜(ﾟヮﾟ☜)
#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
struct Node{
    char data;
    struct Node *right;
    struct Node *left;
};
Node* newNode(char data){
    Node* node = new Node();
    if(!node){
        return NULL;
    }
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
bool isOperator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        return true;
    return false;
}
// void InOrder(Node *node){
//     if(node){
//         InOrder(node->left);
//         cout << node->data;
//         InOrder(node->right);
//     }
// }
long long expression_tree(string s){
    long long res = 0;
    stack<char> stk;
    stack<Node *> st;
    Node *node, *first, *second;
    for (int i = 0; i < s.length();i++){
        if(isOperator(s[i])){
            stk.push(s[i]);
            if(node->left == NULL){
                node = newNode(s[i]);
            }else if(node->right == NULL)
                node = newNode(s[i]);
        }else {
        }
    }
    node = st.top();
    st.pop();
    return res;
}
void input(){
    string s;
    cin.ignore();
    getline(cin, s);
    cout << expression_tree(s) << endl;
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