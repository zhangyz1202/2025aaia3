/// week07-2.cpp ���e�P�P�@��
/// ���X�W�j�������, �Ʀr�]�_��
/// TAICA ��j��¦�{���]�p(C++) �������D ��6�D
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n; /// Part 1: Input
    cin >> n;

    for (int i=1; i<n*2; i++){ /// Part 2: output
            for (int j=1; j<n*2; j++){
                int  d = max(abs(i-n), abs(j-n));
                cout << d + 1;
            }
            cout << endl; ///cout << "�{�bi�O: " << i << endl; /// �Ӽh������
    }
} /// 2�|��3�h��, 3�|��5�h��, 4�|��7�h��, 5�|��9�h��
