# Longest_Palindromic_Substring

## 	題目 : 給一組字串，找出最長的回文
##	Issue: Given a string s, find the length of the longest substring without repeating characters.iven a string s, 
##         return the longest palindromic substring in s.

## 解法
#  - 中心擴展法很直覺，就是把每一個字元都當作是中心，用一個迴圈檢查左右是否相同，
#    若不相同或是觸及邊界就跳出迴圈，記下最長的長度以及開頭，最後再回傳對應的子字串。
## Solution
#  - 1. Use center expandation to solve this issue.  
#  - 2. Asume each of letter is center,then check left and right string are the same or not.
#  - 3. If not or trigger edage, condition is end. then record the longest and start position.
#  - 4. Finally, return the longest of string.


