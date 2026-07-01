// Last updated: 01.07.2026 15:01:47
1#include <limits.h>
2#include <stdio.h>
3
4int myAtoi(char* s) {
5    int i = 0;
6    int sign = 1;
7    long int result = 0; 
8
9    // Boşlukları atla
10    while (s[i] == ' ') {
11        i++;
12    }
13
14    // İşareti belirle
15    if (s[i] == '+' || s[i] == '-') {
16        if (s[i] == '-') {
17            sign = -1;
18        }
19        i++;
20    }
21
22    //Rakamları oku
23    while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0') {
24        int digit = s[i] - '0';
25        
26        
27        result = (result * 10) + digit;
28        
29        // Eğer pozitifse ve INT_MAX'ı geçtiyse
30        if (sign == 1 && result > INT_MAX) {
31            return INT_MAX;
32        }
33        // Eğer negatifse ve INT_MIN'den daha küçük bir hale geldiyse
34        if (sign == -1 && -result < INT_MIN) {
35            return INT_MIN;
36        }
37
38        i++;
39    }
40    
41    return (int)(sign * result);
42}