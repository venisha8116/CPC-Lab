#ifndef CUSTOM_STRING_LIBRARY_H
#define CUSTOM_STRING_LIBRARY_H

// String length
int mystrlen(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// String copy
void mystrcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Null-terminate the destination string
}

// String Concatenation
void mystrcat(char *dest, const char *src) {
    int i = 0;
    // Find the end of the destination string
    while (dest[i] != '\0') {
        i++;
    }
    // Append source string
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0'; // Null-terminate
}

// String Compare
// Returns 0 if equal, positive if str1 > str2, negative if str1 < str2
int mystrcmp(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

// String Reverse
void mystrrev(char *str) {
    int len = mystrlen(str);
    int start = 0;
    int end = len - 1;
    char temp;
    
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

#endif