#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

string findWordWithMostRepeatedLetters(const string &str)
{
    istringstream iss(str);
    string word;
    string result;
    int maxCount = 0;
    bool flag;
    while (iss >> word)
    {
        map<char, int> charCount;
        for (auto &c : word)
        {
            charCount[c]++;
        }

        int repeatedCount = 0;
        for (auto &item : charCount)
        {
            if (item.second > 1)
            {
                repeatedCount += item.second - 1;
            }
        }

        if (repeatedCount > maxCount)
        {
            maxCount = repeatedCount;
            result = word;
        }
        flag = true;
    }
    if (!flag)
    {
        cout << "Not found";
        return 0;
    }
    else
        return result;
}

int main(int argc, char const *argv[])
{
    string str;
    cout << "Enter string: ";
    getline(cin, str); // read string with spaces

    cout << "Word which has the highest number of repeated letters : "
         << findWordWithMostRepeatedLetters(str) << endl;

    return 0;
}
