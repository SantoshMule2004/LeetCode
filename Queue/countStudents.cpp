class Solution {
    public:
        int countStudents(vector<int>& students, vector<int>& sandwiches) {
            int n = students.size();
            int r(0), i(0);
    
            queue<int> q;
    
            for(auto s : students)
                q.push(s);
    
            while(i<n && r<n) {
                int front = q.front();
                q.pop();
    
                if(front == sandwiches[i]) {
                    i++;
                    r=0;
                } 
                else {
                    q.push(front);
                    r++;
                }
            }
            return q.size();
        }
    };