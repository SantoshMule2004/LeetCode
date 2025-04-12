class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stk;
        for (auto c : s)
        {
            if (c != 'c')
                stk.push(c);
            else
            {
                if (stk.size() < 2)
                    return false;

                if (stk.top() != 'b')
                    return false;
                stk.pop();

                if (stk.top() != 'a')
                    return false;
                stk.pop();
            }
        }
        return stk.empty();
    }
};