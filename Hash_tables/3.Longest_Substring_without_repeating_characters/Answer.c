#define max(a,b) ((a>b)?a:b)

int lengthOfLongestSubstring(char* s) {
    // String length 
    int StringSize = strlen(s);
    // ascii max value (0 - 127).
    int StrAscII[128] = {0};
    int left = 0,maxma = 0;
    for (int right=0; right<StringSize; right++){
        left = max(StrAscII[s[right]], left);
        maxma = max(maxma, right - left + 1);
        StrAscII[s[right]] = right + 1;
    }
    return maxma;
}