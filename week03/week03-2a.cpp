// week03-2a.cpp �G�X�@ �n�g�⦸
// LeetCode �ǲ߭p�e��8�D 1822. Sign of the Product of an Array
// ��}�C���_��, �ݬO���ơB�t��, �٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; // �]�� 0 �������, ���|�ܦ�0, �u��1�̨�, �������ܤ���
        for(int i=0; i<nums.size(); i++){ // �ݦ��X�Ӽ�,�j��]�X��
            ans *=nums[i]; // �C���� nums[i] ���i ans ��
        } // �Ʀr�V���V�j, 1000�ӼƦr, ����@�b, �N�z���F, �ҥH�{�����F
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
