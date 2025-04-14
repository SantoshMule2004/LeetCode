class Solution {
    public:
        int timeRequiredToBuy(vector<int>& tickets, int k) {
            queue<int> q;
            int time(0);
            for(int i=0; i<tickets.size(); i++)
                q.push(i);
    
            while(!q.empty()) {
                int ind = q.front();
                tickets[ind]--;
                time++;
                q.pop();
    
                if(tickets[ind])
                    q.push(ind);
    
                if(!tickets[k])
                    break;
            }
            return time;
        }
    };