// Last updated: 02.07.2026 13:24:28
1bool isPalindrome(int x) {
2    
3    char str[12];
4    snprintf(str, sizeof(str), "%d", x);
5    int left=0;
6    int right=0;
7    int len = strlen(str);
8
9
10    if(x<10 && x>=0) return true;
11    
12    
13   
14
15     if (len % 2 != 0) {
16        left = len / 2;
17        right = len / 2;
18    } 
19     else {
20        left = (len / 2) - 1;
21        right = len / 2;
22    }
23
24
25    
26       
27        while(left>=0 && right<strlen(str))
28        {
29        
30            if(str[left]!=str[right]){
31                return false;
32                 
33            }
34            left--;
35            right++;
36        }
37        
38        
39    
40    return true;
41}