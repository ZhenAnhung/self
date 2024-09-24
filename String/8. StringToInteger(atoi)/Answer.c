int myAtoi(char* s) {
    int strsize=strlen(s);
    long long ans=0;
    bool negative = false;
    for (int i =0 ; i < strsize;i++){
        // filter null space 
        if (s[i]== ' ') continue;
        // between a to z to reurn ans.
        if (s[i]>='a' && s[i]<= 'z') {
            if (negative){
                return -ans;
            }else{
                return ans;
            }
        }
        if (s[i] == '.') return ans;
		// check currently and next state if no-digital,return ans.
        if (s[i] == '-' && s[i+1] == '-') return ans;
		// check whether negative.
        if (s[i]=='-'){
            negative = true;
            continue;
        }
		// String needs arrage 1 to 9 otherwise, can't add to integer.
        if (s[i] >='0' && s[i] <= '9') ans = ans*10+(s[i]-'0');
		// check whether no-digital current state and next state.
        if (s[i] == '+' && negative || s[i+1] == ' ' || s[i+1] == '+'){
            if (negative){
                return -ans;
            }else{
                return ans;
            }
        }
		// check whether no-digital current state and next state.
        if (s[i+1] == '-'|| s[i+1] == '.' || s[i+1] == ' ' && s[i] >='0' && s[i] <= '9') {
            if (negative){
                return -ans;
            }else{
                return ans;
            }
        }
		// check bigger than int max and small than int min
        if (negative && -ans <= INT_MIN) return INT_MIN;
        if (i == (strsize -1) && negative) ans =-ans;
        if (ans >=INT_MAX) return INT_MAX;
    }
    return ans;
}