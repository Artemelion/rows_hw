#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// ==== BLOCK HW 1 ====

int myStrLen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int myStrCmp(const char* str1, const char* str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) return *str1 - *str2;
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

void myStrCpy(char* dest, const char* source) {
    while (*source) {
        *dest++ = *source++;
    }
    *dest = '\0';
}

void myStrCat(char*& dest, const char* source) {
    int len1 = myStrLen(dest);
    int len2 = myStrLen(source);
    char* result = new char[len1 + len2 + 1];
    for (int i = 0; i < len1; ++i) result[i] = dest[i];
    for (int i = 0; i < len2; ++i) result[len1 + i] = source[i];
    result[len1 + len2] = '\0';
    delete[] dest;
    dest = result;
}

char* myStrStr(char* haystack, const char* needle) {
    int lenHay = myStrLen(haystack);
    int lenNeedle = myStrLen(needle);
    for (int i = 0; i <= lenHay - lenNeedle; ++i) {
        int j = 0;
        while (j < lenNeedle && haystack[i + j] == needle[j]) j++;
        if (j == lenNeedle) return &haystack[i];
    }
    return nullptr;
}

// ==== BLOCK HW 2 ====

int countOccurrences(const char* text, char symbol) {
    int count = 0;
    while (*text) {
        if (*text == symbol) count++;
        text++;
    }
    return count;
}

int countDotsAndCommas(const char* text) {
    int count = 0;
    while (*text) {
        if (*text == '.' || *text == ',') count++;
        text++;
    }
    return count;
}

int countSentences(const char* text) {
    int count = 0;
    while (*text) {
        if (*text == '.' || *text == '!' || *text == '?') count++;
        text++;
    }
    return count;
}
