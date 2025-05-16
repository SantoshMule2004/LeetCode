class Solution {
public:
    void DFS(vector<vector<int>>& isConnected, vector<bool>& visited, int city, int n) {
        visited[city] = true;

        for(int i=0; i<n; i++)
            if(isConnected[city][i] && !visited[i])
                DFS(isConnected, visited, i, n);
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n, false);
        int provinces(0);
        for(int i=0; i<n; i++) {
            if(!visited[i]) {
                DFS(isConnected, visited, i, n);
                provinces++;
            }
        }
        return provinces;
    }
}; 