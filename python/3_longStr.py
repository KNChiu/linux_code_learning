#!/usr/bin/env python

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:

        checkIndex = 0
        checkChar = s[checkIndex]
        firstChar = 0
        strLen = len(s)

        while firstChar != strLen:
            #for charCont in range(0, strLen - checkIndex):
#            print(s[checkIndex : strLen])
                
            print(s[checkIndex : strLen])
            print(checkChar)
            print(firstChar)
            print(checkIndex)
            print("======")
            
            if checkChar in s[checkIndex : strLen]:
                checkIndex += 1
                if firstChar == checkIndex:
#                    checkChar = s[firstChar]
                    pass
                elif firstChar > checkIndex:
                    checkChar = checkChar
                else:
                    checkChar = s[firstChar : checkIndex]
            else:
                checkIndex = 0
                firstChar += 1

                

if __name__ == "__main__":
    lenget = Solution()
    lenget.lengthOfLongestSubstring("pwwkew")

