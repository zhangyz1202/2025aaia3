// week04-3.cpp
// LeetCode �ǲ߭p�e��7�g 66.Plus One
// 1 2 3
//     4 �̥k��}�l, +1 ����
//4 3 2 1
//      2 �̥k��}�l, +1����
//9 4 9
//    0 ���i��,����? ���i�H return �~��
//  5 �̥k��+1 ����
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int N = digits.size(); // �W�g�йL �}�C�j�p
       for (int i=N-1; i>=0; i--){ //�˹L�Ӫ��j��
       if (digits[i]==9){ // �n�i��, �·ФF(���൲��)
           digits[i] = 0; // �]��0,�~�򰵡B������
        } else { //���ζi�쪺��, �W�n��! ����++ �N�����F!!
            digits[i]++; // ²�� +1
            return digits; // ��������}�C[����]return
        }
    }
    digits.insert( digits.begin(), 1); // �̥��� �n���J1
    return digits; // �����o
    }
};
