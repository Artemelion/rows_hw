#include "Func_Str_Txt.h"
using namespace std;

int main() {
    // --- BLOCK HW 1 ---
    cout << "BLOCK 1 String Functions" << endl;
    char* buffer = new char[100];
    strcpy(buffer, "Hello");

    cout << "Length: " << myStrLen(buffer) << endl;

    char cmp1[] = "Hello", cmp2[] = "World";
    cout << "Compare result: " << myStrCmp(cmp1, cmp2) << endl;

    char dest[100];
    myStrCpy(dest, cmp1);
    cout << "Copied: " << dest << endl;

    char* dynamic = new char[100];
    strcpy(dynamic, "Hello ");
    myStrCat(dynamic, "World");
    cout << "Concatenated: " << dynamic << endl;
    delete[] dynamic;

    char* foundStr = myStrStr(buffer, "lo");
    if (foundStr)
        cout << "Found: " << foundStr << endl;
    else
        cout << "Substring not found" << endl;

    delete[] buffer;

    // --- BLOCK HW 2 ---
    cout << "\nBLOCK 2 Text Processing" << endl;
    const char* text = "Hello, world! How are you doing?";
    cout << text << endl;
    cout << "Occurrences of 'o': " << countOccurrences(text, 'o') << endl;
    cout << "Dots & commas: " << countDotsAndCommas(text) << endl;
    cout << "Sentences: " << countSentences(text) << endl;

    return 0;
}
