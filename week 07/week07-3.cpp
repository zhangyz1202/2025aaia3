// week07-3.cpp �ǲ߭p�e Simulation ��3��
// 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:       // vector �O C++ ���}�e, �����Y�ۦp, ���O2D������g
    string tictactoe(vector<vector<int>>& moves) {
       int a[3][3] = {}; // C�y�����}�C, �j�@�йL, ���²��
       // {}�j�A���N���l��,[�̭��Ū�]�N���O0
       int now = 1; // �{�b�����a1:���aA, 2:���aB
       int winner = 0; // �٨S���o�Ӫ����a
       for (vector<int>& move : moves){
        int i = move[0], j = move[1]; // ���X�y��
        a[i][j] = now; // ��X�l,�U�b�}�C��
        // �U����, �n�ˬd[���L�o��!]
        if (now==a[i][0] && now==a[i][1] && now==a[i][2]) winner =now;
        if (now==a[0][j] && now==a[1][j] && now==a[2][j]) winner =now;
        if (now==a[0][0] && now==a[1][1] && now==a[2][2]) winner =now;
        if (now==a[0][2] && now==a[1][1] && now==a[2][0]) winner =now;
        if (now==1) now = 2;
        else now = 1;
       }
       if (winner==1) return "A";
       else if (winner==2) return "B";
       else if (moves.size()==9) return "Draw";
       else return "Pending";
    }
};
