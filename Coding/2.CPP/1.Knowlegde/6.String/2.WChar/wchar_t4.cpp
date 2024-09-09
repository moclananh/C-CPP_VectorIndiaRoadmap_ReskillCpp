#include <iostream>
#include <cwchar>  // For wide character functions
#include <locale>  // For locale settings

int main() {
    // Setting the locale to support wide characters
    std::setlocale(LC_ALL, "");

    // Defining wide characters
    wchar_t wch1 = L'A';
    wchar_t wch2 = L'あ';  // Japanese Hiragana character 'A'

    // Printing wide characters
    std::wcout << L"Wide character 1: " << wch1 << std::endl;
    std::wcout << L"Wide character 2: " << wch2 << std::endl;

    // Wide string
    const wchar_t* wideStr = L"こんにちは";  // "Hello" in Japanese
    std::wcout << L"Wide string: " << wideStr << std::endl;

    return 0;
}

