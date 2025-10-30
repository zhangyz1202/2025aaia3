// week08-1.cpp LeetCode學習計畫 Matrix 矩陣第1題
// 1672. Richest Customer Wealth 找到最有錢的人，有多少錢
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for(int i=0; i<accounts.size(); i++){
             int now = 0;
             for(int j=0; j<accounts[0].size(); j++){
                 now += accounts[i][j];
             }
             ans = max(ans , now);
        }
        return ans;
    }
};
