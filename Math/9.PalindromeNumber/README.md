# Palindrome Number

## 	題目 : 給一個數字判斷是不是回文
##  Given an integer x, return true if x is a palindrome, and false otherwise.

## 解法
#  - 題目意思判斷這個數字是不是回文，意思是說12321 是回文，1122則不是。
#  - 可以利用把數字倒過來的方式來判斷是不是回文，舉例 X = 121，可以用除法的餘數來判斷是不是。
## Solution
#  - Use temp to store the reversed integer. In each loop, we extract the last digit of x using the remainder of division (x % 10) and add it to temp.
#  - Iterate: We remove the last digit of x in each iteration (x = x / 10).
#  - Stop when: Either temp is equal to x, or x is equal to temp divided by 10. This accounts for both odd and even digit numbers.
#  - Check for Palindrome: If x equals temp at the end, or if x equals temp / 10, the number is a palindrome.

