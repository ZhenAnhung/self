# Reverse Integer

## 	題目 : 給一個有負數值的數字，然後再把數字反過來，舉例來說題目123答案是321。
##  Given a signed 32-bit integer x, return x with its digits reversed. 
#   If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

## 解法
#  -利用除法餘數來轉換
#  -需要去判斷正負值來做轉換
#  -需要注意int 的最大值與最小值。
## Solution
#  - Usage division to reverse the integer.
#  - Need to confirm positive and nagetive. if nagetive, transfer to positive.
#  - Notice integer would be over scope between int max and min.


