// week04-2.cpp
// LeetCode �ǲ߭p�e��10�D 896. Monotonic Array
// �}�C�ܳ��, �u���W�[ or �u����֡C ���i�H[�S�W�S��]
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up = 0, down = 0; // up:���W�[ down: �����
        for(int i=1 ;i<nums.size(); i++){ // �����
            if (nums[i-1]<nums[i]) up =1;
            if (nums[i-1]>nums[i]) down =1;
        }
        if(up==1 && down==1)return false; // ���i�H [�S�W�S���]
        return  true;// �S�����\�A�N���\
    }
};
