/// week 08-04.cpp
/// �Ʀr�¬} �d���C�J�`�� 6174 (�j��p - �p��j�A���� 7 ��)

#include <iostream>
#include <vector> /// ���Y�ۦp���}�C
#include <algorithm> /// �t��k sort()�O�t��k��I
using namespace std;
int main()
{
    cout << "�п�J���N4���(�����P)�G";
    int n;
    cin >> n;
    for (int i=0; i<7; i++) /// �C�B���A���w����¬} 6174
    {
        vector<int> a; /// ���Y�ۦp���}�C
        while (n>0) /// ��֪k�A��4��ơA�v�@��X��
        {
            a.push_back(n%10); /// �⥦����}�C�̭�
            n = n/10; /// �駹�֡A�N�G�F
        }
        sort( a.begin(), a.end() ); ///��}�C�i�p��j�Ʀn�j
        int M = a[3]*1000 + a[2]*100 + a[1]*10 + a[0]; ///�˹L�ӡA�j��p
        int m = a[0]*1000 + a[1]*100 + a[2]*10 + a[3]; ///�p��j
        ///���@�U�AM�O�ƻ�Hm �O�ƻ�H�٨S�o��
        n = M - m;
        cout << M << "�" << m << "�o��G" << n << endl;
    }
}
