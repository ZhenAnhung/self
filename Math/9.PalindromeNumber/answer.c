bool isPalindrome(int x) {
    bool ans = false ;
    int tempFirst= 0;
    if ( x < 0 || x!=0 && x %10==0) return ans;
    if ( x >= 0 && x <= 9) ans =true;
    while(x >tempFirst){
        tempFirst = tempFirst*10 + x%10;
        x= x/10;
        if (x == tempFirst || x== tempFirst/10) ans = true;
    }
    return ans;
}