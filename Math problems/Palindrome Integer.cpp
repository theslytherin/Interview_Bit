class Solution:
    # @param A : integer
    # @return an integer
    def isPalindrome(self, A):
        if A<0:
            return 0
        if(int(str(A)[::-1])==A):
            return 1
        else:
            return 0
