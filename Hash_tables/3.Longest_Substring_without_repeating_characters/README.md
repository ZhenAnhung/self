# Longest Substring without repeating characters

## 	題目 : 給一個字串，並且找出無重複的字串最常長度 
##	Issue: Given a string s, find the length of the longest substring without repeating characters.

## 解法
#  - 利用陣列s['字串'] = 迴圈數值來解此題。
#  - 簡單來說就是當有重複的時候 左邊點會移動到重複的位置並更新左邊點位置來更新最常長度。
#  - 舉例: abcabcbb => 當地四圈的時候會遇到重複的字串a，這時最左邊會更新位置到a點
#  -                   這時候也會算最長距離，這動作會持續到字尾。
## Solution
#  - 1. Check if the string has a repetition. If so, sq[s[right]] will get a value.
#  - 2. Calculate the maximum length.
#  - 3. Record sq[s[right]] = right + 1.

#  - for example, abcabcbb
#  - circle 1 L=0 R=0 max=1 sq['a'] = 1 
#  - circle 2 L=0 R=1 max=2 sq['b'] = 2
#  - circle 3 L=0 R=2 max=3 sq['c'] = 3
#  - circle 4 L=1 R=3 max=3 sq['a'] = 4 
#  - circle 5 L=2 R=4 max=3 sq['b'] = 5 
#  - circle 6 L=3 R=5 max=3 sq['c'] = 6 
#  - circle 7 L=5 R=6 max=2 sq['b'] = 7 
#  - circle 8 L=7 R=7 max=1 sq['b'] = 8 