class Solution:
    def longestPalindrome(self, s: str) -> str:
        print(s)
        longest = ""
        index = 0
        while s or longest :
            if longest in s[index::]:
                longest = s[index + 1 ::]
                print(s[index])
                print(s[index + 1::])
            else:    
                break 

if __name__ == "__main__":
    S = Solution()
    S.longestPalindrome("babad")



