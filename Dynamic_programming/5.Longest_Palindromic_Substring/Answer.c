typedef struct SearchStruct{
    char* str;
    int   maxsize;
}S2;

S2 search_range(int left,int right, char* s,int t_size){
    int start=0,end=0,count=0;
    struct  SearchStruct search_ans;

    // Expand the palindrome range as long as the characters match
    while (left >= 0 && right < strlen(s) && s[left] == s[right]) {
        left--;
        right++;
    }
    // Calculate the start and end indices of the palindrome
    if ((right - left - 1) > end){
        start=left+1;
        end =right- 1;
    }
    // Allocate sufficient memory for the palindrome (based on the input string length)
    char* a =  malloc((t_size+1)* sizeof(char)); 
    if (!a) {  // Check if malloc failed
        printf("Memory allocation failed\n");
        exit(1);
    }
    // Copy the palindrome substring into the allocated string
    for(int i = start;i <=end ;i++){
        a[count++] = s[i];
    }
    // Null-terminate the string
    a[count]='\0';
    search_ans.str = a;
    search_ans.maxsize= right-left;

    return search_ans;
}


char* longestPalindrome(char* s) {
    int StrSize = strlen(s);
    S2 a ;
    S2 odd;
    S2 even;
    a.maxsize = 0;
    a.str = "";

    if(StrSize == 1 )return s;
    // Loop through each character in the string
    for (int i = 0;i<StrSize;i++){
            // Check for odd-length palindromes
            odd=search_range(i,i,s,StrSize);
            if((odd.maxsize>a.maxsize)) {
                // Free previous palindrome string
                if (a.maxsize>0)free(a.str);
                a=odd;
            }
            // Check for even-length palindromes      
            even=search_range(i,i+1,s,StrSize);
            if((even.maxsize>a.maxsize)){
                // Free previous palindrome string
                if (a.maxsize>0)free(a.str);
                a=even;
            } 
    }
    return a.str;
}