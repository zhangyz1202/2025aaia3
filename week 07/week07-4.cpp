// week07-4.cpp �ǲ߭p�e Simulation ���� ��4��
// 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions +instructions+ instructions;
        cout << instructions;
        int x = 0, y = 0;
        int d = 0; // d:��Vdirection 0:�_ 1:�F 2:�n 3:��
        // �k�� d = (d+1) % 4 ��4���l��
        // ���� d = (d-1+4) % 4 = (d+3) %4 �i�H�˹L��
        int dx[4] = {0, 1, 0, -1}; // �e�i�@��ɡA�|�� x +=dx[d] �� y += dx[d]
        int dy[4] = {1, 0, -1, 0};
        for (char c : instructions){
            if (c=='G'){
                x += dx[d];
                y += dy[d];
            } else if (c=='R'){
                d = (d+1) % 4 ;
            }else if (c=='L'){
                d = (d+3) % 4;
            }
        } // ���}�j���....���M�|�@�����A���ɷ|�����^�ӡA���ɭԷ|�^��
        cout << 'x' << 'y' << y << endl;
        if (x==0 &&�@y==0) return true;
        else return false;
    }
};
