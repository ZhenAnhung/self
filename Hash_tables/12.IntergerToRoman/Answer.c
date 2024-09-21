char * intToRoman(int num){
    char *re = (char*) malloc(sizeof(char)*20);
    int i = 0;
    while(num>0){
        if(num>=1000){
            num-=1000;
            re[i++] = 'M';
        }
        else if(num>=900){
            num-=900;
            re[i++] = 'C';
            re[i++] = 'M';
        }
        else if(num>=500){
            num-=500;
            re[i++] = 'D';
        }
        else if(num>=400){
            num-=400;
            re[i++] = 'C';
            re[i++] = 'D';
        }
        else if(num>=100){
            num-=100;
            re[i++] = 'C';
        }
        else if(num>=90){
            num-=90;
            re[i++] = 'X';
            re[i++] = 'C';
        }
        else if(num>=50){
            num-=50;
            re[i++] = 'L';
        }
        else if(num>=40){
            num-=40;
            re[i++] = 'X';
            re[i++] = 'L';
        }
        else if(num>=10){
            num-=10;
            re[i++] = 'X';
        }
        else if(num>=9){
            num-=9;
            re[i++] = 'I';
            re[i++] = 'X';
        }
        else if(num>=5){
            num-=5;
            re[i++] = 'V';
        }
        else if(num>=4){
            num-=4;
            re[i++] = 'I';
            re[i++] = 'V';
        }
        else{
            num--;
            re[i++] = 'I';
        }
    }
    re[i] = '\0';
    return re;
}