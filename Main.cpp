#include <iostream>
#include <cstring>
#include "Func_Str_Txt.h"
using namespace std;

int main() {
    // --- 了问 1 ---
    cout << "BLOCK 1 - String Functions" << endl;
    const char* original = "World";
    char buffer[100] = "Hello ";

    // mystrlen
    cout << "Length of 'World': " << mystrlen(original) << endl;

    // mystrcpy
    mystrcpy(buffer, original);
    cout << "Copied string: " << buffer << endl;

    // mystrcat
    mystrcpy(buffer, "Hello ");
    mystrcat(buffer, original);
    cout << "Concatenated string: " << buffer << endl;

    // mystrchr
    const char* foundChar = mystrchr(buffer, 'r');
    if (foundChar) cout << "Found char 'r': " << foundChar << endl;
    else cout << "Char 'r' not found" << endl;

    // mystrstr
    const char* foundStr = mystrstr(buffer, "or");
    if (foundStr) cout << "Found substring 'or': " << foundStr << endl;
    else cout << "Substring 'or' not found" << endl;

    // --- 了问 2 ---
    cout << "\nBLOCK 2 - Text Processing" << endl;
    char text[] = "Hello world. How are you doing? This is an example, really!";

    // countOccurrences
    cout << "Occurrences of 'is': " << countOccurrences(text, "is") << endl;

    // countSentences
    cout << "Number of sentences: " << countSentences(text) << endl;

    // countDotsAndCommas
    cout << "Number of '.' and ',': " << countDotsAndCommas(text) << endl;

    // reverseText
    char fullCopy[200];
    strcpy(fullCopy, text);
    reverseText(fullCopy);
    cout << "Reversed full text: " << fullCopy << endl;

    // reverseEachSentence
    char sentenceCopy[200];
    strcpy(sentenceCopy, text);
    reverseEachSentence(sentenceCopy);
    cout << "Each sentence reversed: " << sentenceCopy << endl;

    return 0;
}
