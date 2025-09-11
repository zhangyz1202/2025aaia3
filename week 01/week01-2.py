# week01-2.py �ϥ� Python ����2 �ϥ� for �j��
# LeetCode 28. Find the Index of the First Occurrence in a String
# �b haystack �b���_����z��� needle �w (�j�����w)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) # �r�ꪺ����
        N = len(needle)   # �r�ꪺ����
        for i in range(H-N+1): # �O�o�n+1
            # ���� slicing
            if haystack[i : i+N] == needle: # ��쪺��
                return i #���m����
        # ���S�����\, ���}�j�骺��, �N��䤣��
        return -1
