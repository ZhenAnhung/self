char* convert(char* s, int numRows) {
    int StrSize = strlen(s);
    int FirstDistance=0,OneDistance= 0, TwoDistance = 0,count=0;
    char* ans=malloc((StrSize+1)*sizeof(char));
    if (numRows <= 1 || StrSize <=1) return s;
    FirstDistance = (numRows-1)*2;
    for(int i =0 ; i < numRows;i++){
        OneDistance = FirstDistance - i *2;
        TwoDistance = FirstDistance - OneDistance;
        int indx = i, CaculLen=i;
        if(i < StrSize){ans[count++] = s[i];}
        else{break;}
        while(indx < StrSize){
            if (OneDistance > 0 && TwoDistance ==0){
                indx+=OneDistance;
                if(indx < StrSize){CaculLen +=OneDistance;}
                else{ break;}
                ans[count++] = s[CaculLen];
            }else if((OneDistance == 0 && TwoDistance >0)) {
                indx+=TwoDistance;                
                if(indx < StrSize){CaculLen +=TwoDistance;}
                else{ break;}
                ans[count++] = s[CaculLen];            
            }else{
                indx+=OneDistance;
                if(indx < StrSize){CaculLen +=OneDistance;}
                else{ break;}
                ans[count++] = s[CaculLen];
                indx+=TwoDistance;
                if(indx < StrSize){CaculLen +=TwoDistance;}
                else{ break;}
                ans[count++] = s[CaculLen];             
            }
        }
        ans[count] ='\0';
    }

    return ans;
}