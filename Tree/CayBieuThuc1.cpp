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
void InOrder(Node *node){
    if(node){
        InOrder(node->left);
        cout << node->data;
        InOrder(node->right);
    }
}
Node* expression_tree(string s){
    stack<Node *> st;
    Node *node, *first, *second;
    for (int i = 0; i < s.length();i++){
        if(!isOperator(s[i])){
            node = newNode(s[i]);
            st.push(node);
        }else {
            node = newNode(s[i]);
            first = NULL;
            second = NULL;
            if(!st.empty()){
                first = st.top();
                st.pop();
            }
            if(!st.empty()){
                second = st.top();
                st.pop();
            }
            // first = st.top();
            // st.pop();
            // second = st.top();
            // st.pop();
            node->right = first;
            node->left = second;
            st.push(node);
        }
    }
    node = st.top();
    st.pop();
    return node;
}
void input(){
    string s;
    cin >> s;
    InOrder(expression_tree(s));
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