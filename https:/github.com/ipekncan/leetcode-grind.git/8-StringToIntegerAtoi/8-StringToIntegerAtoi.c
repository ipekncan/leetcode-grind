// Last updated: 01.07.2026 15:03:15
#include <limits.h>
#include <stdio.h>

int myAtoi(char* s) {
    int i = 0;
    int sign = 1;
    long int result = 0; 

    // Boşlukları atla
    while (s[i] == ' ') {
        i++;
    }

    // İşareti belirle
    if (s[i] == '+' || s[i] == '-') {
        if (s[i] == '-') {
            sign = -1;
        }
        i++;
    }

    //Rakamları oku
    while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0') {
        int digit = s[i] - '0';
        
        
        result = (result * 10) + digit;
        
        // Eğer pozitifse ve INT_MAX'ı geçtiyse
        if (sign == 1 && result > INT_MAX) {
            return INT_MAX;
        }
        // Eğer negatifse ve INT_MIN'den daha küçük bir hale geldiyse
        if (sign == -1 && -result < INT_MIN) {
            return INT_MIN;
        }

        i++;
    }
    
    return (int)(sign * result);
}