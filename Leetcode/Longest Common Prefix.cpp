class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
    int n = s.size();
    sort(s.begin(),s.end());
    string temp = "", pr = s[0];
    int m = s[0].size(), x = 0;
    for (int i = 0; i < n-1 ; i++)
    {
        // if()
        temp = "";
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == s[i + 1][j] && pr[j] == s[i][j])
            {
                temp.push_back(s[i][j]);
            }
            else if(pr[j] != s[i][j] || i==n-2){
                break;
            }
                
        }
    }
    pr = temp;
    m = pr.size();
    if (s.size() == 1)
    {
        return s[0];
    }
    else if (pr.size() == 0)
    {
        return "";
    }
    else
        return pr;
    }
};
