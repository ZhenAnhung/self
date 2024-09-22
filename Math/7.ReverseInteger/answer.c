
bool PostiveValue(int value){
    bool ans = false;
	// Check integer small than int min
	// if yes, return 0 .
    if (value <= INT_MIN) return 0 ;
    if (value < 0){
      ans = true;
    }
    return ans;
}

long int CarryNumurlsCaculate( long int RemainderN,long int ToMultiply,long int CurrenCaculateNumurl){
    long int ans = 0;
    ans = (RemainderN*ToMultiply)+CurrenCaculateNumurl%10;
	// Check integer bigger than int max
	// if yes, return 0 .
    if (ans > INT_MAX) return 0 ;
    return ans;
}

int reverse(int x){
    long int CurrenCaculateNumurl=0,z=0,RemainderN=0,ToMultiply=0;
	// set currently integer for caculation.
    CurrenCaculateNumurl=x;
    // Check numurl is positive or negative.
    if (PostiveValue(x)){
        CurrenCaculateNumurl= -x;
    }
	// The method involves using the current integer and 
	// the remainder of the division result to determine when to exit the function. 
    while(CurrenCaculateNumurl>0){
        // Reverse numurl  
        RemainderN=(CarryNumurlsCaculate(RemainderN,ToMultiply,CurrenCaculateNumurl));
        ToMultiply = 10;
        CurrenCaculateNumurl= CurrenCaculateNumurl /10;

    }
    if (PostiveValue(x)){
        RemainderN= -RemainderN;
    }
    return RemainderN;
}