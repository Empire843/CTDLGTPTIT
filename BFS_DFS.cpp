void DFS(int u){ 
    visited[u] = 1; 
    stack<int> st; 
    st.push(u); 
    while(!st.empty()){ 
        u = st.top(); 
        st.pop(); 
        for (int i = 1; i <= n;i++){ 
            if(matrix[u][i] == 1 && visited[i] == 0){ 
                st.push(u); 
                st.push(i); 
                visited[i] = 1; 
                break; 
            } 
        } 
    } 
} 
void BFS(int u){ 
    visited[u] = 1;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        u = q.front();
        q.pop();
        for (int i = 1; i <= n;i++){
            if(matrix[u][i] == 1 && visited[i] == 0){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}