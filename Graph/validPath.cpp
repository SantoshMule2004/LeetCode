class Solution {
    public:
        bool DFS(int curr, int des, vector<vector<int>>& adj, vector<bool>& visited) {
            if(curr == des) return true;
    
            visited[curr] = true;
            for(auto &neighbour : adj[curr]) {
                if(!visited[neighbour])
                    if(DFS(neighbour, des, adj, visited))
                        return true;
            }
            return false;
        }
    
        bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
            vector<vector<int>> adj(n);
            for(auto &edge : edges) {
                adj[edge[0]].push_back(edge[1]);
                adj[edge[1]].push_back(edge[0]);
            }
            vector<bool> visited(n, false);
            return DFS(source, destination, adj, visited);
        }
    };