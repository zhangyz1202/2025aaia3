// week05-1.cpp
// LeetCode �ǲ߭p�e Built-In Function �Ĥ@�D 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); // ��r��A�ܦ����e�Ъ� cin iostream
        string word; // �r�ꪺ word
        // ss >> word // �ܹ����e�Ъ� cin >> word
        //cout << "Ū�F��" << word << "\n"; // ���ե�
        // ss >> word; // �ܹ����e�Ъ� cin >> word
        // cout << "Ū��F" << word << "\n" // ���ե�
        while(ss>>word){ // �@��Ū�i��
          // �̭��ƻ򳣤���
        }
        return word.length(); // �̫�r�ꪺ���� //return 0; // �H�K

    }
};
