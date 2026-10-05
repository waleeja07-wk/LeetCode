class Solution:
    def isPalindrome(self, x: int) -> bool:
        original = x
        reversed = 0
        while x>0:
            reversed = (reversed * 10)+(x % 10)
            x = x//10
            
        if reversed == original:
            return True
        else:
            return False
s =  Solution()
x = int(input())
if s.isPalindrome(x):
    print("x is a Palindrome Number")
else:
    print("x is not a Palindrome Number")
