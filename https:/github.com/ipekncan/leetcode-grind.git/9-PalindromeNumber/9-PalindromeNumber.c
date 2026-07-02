// Last updated: 02.07.2026 13:28:07
bool isPalindrome(int x) {
    
    char str[12];
    snprintf(str, sizeof(str), "%d", x);
    int left=0;
    int right=0;
    int len = strlen(str);


    if(strlen(str)==1) return true;
    
    
   

     if (len % 2 != 0) {
        left = len / 2;
        right = len / 2;
    } 
     else {
        left = (len / 2) - 1;
        right = len / 2;
    }


    
       
        while(left>=0 && right<strlen(str))
        {
        
            if(str[left]!=str[right]){
                return false;
                 
            }
            left--;
            right++;
        }
        
        
    
    return true;
}