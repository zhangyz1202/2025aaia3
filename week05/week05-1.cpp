// week05-1.cpp
// LeetCode 學習計畫 Built-In Function 第一題 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); // 把字串，變成之前教的 cin iostream
        string word; // 字串的 word
        // ss >> word // 很像之前教的 cin >> word
        //cout << "讀了到" << word << "\n"; // 測試用
        // ss >> word; // 很像之前教的 cin >> word
        // cout << "讀到了" << word << "\n" // 測試用
        while(ss>>word){ // 一直讀進來
          // 裡面甚麼都不做
        }
        return word.length(); // 最後字串的長度 //return 0; // 隨便

    }
};
