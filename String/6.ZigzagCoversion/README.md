# Zigzag Coversion

## 	題目 : 重新組成一個字串並以Z的圖形組成，再組成新的字串
##	Issue: The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: 
##  (you may want to display this pattern in a fixed font for better legibility)
##  P   A   H   N
##  A P L S I I G
##  Y   I   R
##  And then read line by line: "PAHNAPLSIIGYIR"

## 解法
#  - 找出規律並得出每個間隔距離，依序間隔重新組合。
#    此題的數學表達如: FirstDistance = (numRows-1)*2,step1(OneDistance = FirstDistance - i *2;)
#    step2(TwoDistance = FirstDistance - OneDistance;)
#    用數字形式來表達上述的運算如何求得:
#	 Row = 4
#	 1      7       13
#	 2    6 8    12 14
#	 3  5   9 11    15
#	 4      10      16
#    從上面的數字就能得出，從上面開始一個間距為6,0,第二個是4,2,第三個是2,4,第四的是,0,6
#    所以只需要算出第一個間距就能把所以的間距都得出答案。
## Solution
#    1.Determine the First Distance:
#      Calculate the initial step distance, which will be used to find subsequent positions in the pattern.
#      For each step thereafter, the distance alternates between (first distance - row * 2) and (first distance - one step).
#    Example:
#	 For a given number of rows (Row = 4):
#	 1      7       13
#	 2    6 8    12 14
#	 3  5   9 11    15
#	 4      10      16
#    above figure.
#    it could know that 1 Row = 1 > 7 > 13
#                       2 Row = 2 > 6 > 8 > 12 > 14
#                       3 Row = 3 > 5 > 9 > 11 > 15
#                       4 Row = 4 > 10 > 16
#    In each row, we observe that every step follows the same distance pattern as the first calculated distance.
#    By adhering to this rule, we can easily solve the problem. 
