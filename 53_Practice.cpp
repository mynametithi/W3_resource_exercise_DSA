// Write a C++ program to find the largest word in a given string:
#include <iostream>
#include <string>

using namespace std;

string Longest_Word(string text)
{

    string result_word, temp_str1;

    for (int x = 0; x < text.length(); x++)
    {

        if (text[x] != ' ' && (int(text[x]) >= 65 && int(text[x]) <= 90) || (int(text[x]) >= 97 && int(text[x]) <= 122) || (int(text[x] >= 48 && int(text[x]) <= 57)))
        {
            result_word.push_back(text[x]);
        }
        else
        {
            break;
        }
    }

    for (int x = 0; x < text.length(); x++)
    {

        if (text[x] != ' ' && (int(text[x]) >= 65 && int(text[x]) <= 90) || (int(text[x]) >= 97 && int(text[x]) <= 122) || (int(text[x] >= 48 && int(text[x]) <= 57)))
        {
            temp_str1.push_back(text[x]);

            if (x + 1 == text.length() && temp_str1.length() > result_word.length())
            {
                result_word = temp_str1;
            }
        }
        else
        {

            if (temp_str1.length() > result_word.length())
            {
                result_word = temp_str1;
            }

            temp_str1.clear();
        }
    }

    return result_word;
}

int main()
{

    cout << "Original String: C++ is a general-purpose programming language. \nLongest word: " << Longest_Word("C++ is a general-purpose programming language.") << endl;

    cout << "\nOriginal String: The best way we learn anything is by practice and exercise questions. \nLongest word: " << Longest_Word("The best way we learn anything is by practice and exercise questions.") << endl;

    cout << "\nOriginal String: Hello \nLongest word: " << Longest_Word("Hello") << endl;

    return 0;
}
