/// week02-3.cpp �ϥ� ++ 2011 �~�s�����r�� stoi()�\��
/// �b CodeBlocks �̡A�����}�� Settings-Compiler... �� c++11 ���Ĥ�
/// SOIT06_ADVANCE_001 Using C++
#include <iostream> ///cin cout Ū�J��ơA�L�X���
#include <string> /// string �r�ꪺ�\��
using namespace std; /// �ϥΡu�R�W�Ŷ��v�зǪ� std
int main()
{
   string a; /// �ŧi�r�� a
   cin >> a; /// Ū�J�r�� a

   string ans; /// �ŧi�r�� ans �񵪮ץΪ�
   int N = a.length(); /// �r�� a ������
   for (int i=N-1; i>=0; i--){ /// �˹L�Ӫ��j��
      ans += a[i]; /// �b�j��̡A�� a[i] ��� ans ���᭱

  }

      cout << a << '+' << stoi(ans) << '=' << stoi(a) + stoi(ans) << endl;
} /// stoi() is "string to int" ��u�r��v�ܦ��u��ơv
