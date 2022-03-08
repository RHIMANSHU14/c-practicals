#include <iostream>
#include <cstring>
using namespace std;

void adress();
void concate1();
void compare();
void string_length();
void uppercase();
void reverse();
int main()

{

    int y;

    cout << "menu is" << endl;
    cout << "1. Show address of each character in string " << endl;
    cout << "2. Concatenate two strings without using strcat function " << endl;

    cout << "3. Compare two strings" << endl;
    cout << "4. Calculate length of the string (use pointers)" << endl;
    cout << "5. Convert all lowercase characters to uppercase" << endl;

    cout << "6. Reverse the string " << endl;
    cout << "\n enter your choice betwwen(1to6):";
    cin >> y;

    switch (y)
    {
    case 1:
        adress();
        break;

    case 2:
        concate1();
        break;
    case 3:
        compare();
        break;

    case 4:
        string_length();
        break;
    case 5:
        uppercase();
        break;

    case 6:
        reverse();
    }

    return 0;
}

void adress()
{
    string str;
    cout << "enter your string : ";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {

        cout << "adress at index" << i << ":" << (void *)&str[i] << endl;
    }
}

void concate1()
{
    string s1, s2, s3;
    cout << "\n enter first string :";
    cin >> s1;
    cout << "\n enter the second string :";
    cin >> s2;
    s3 = s1 + s2;
    cout << "\n resultant string is:" << s3;
}
void string_length()
{
    char str[50];
    cin >> str;
    char *ptr = str;
    int length = 0;
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    cout << length;
}

void uppercase()
{
    char s[30];
    cout << "\n enter the string in lower case:";
    cin >> s;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] = s[i] - 32;
        }
    }
    cout << "\n the enter string is uppercase:" << s;
}
void reverse()
{
    string str;
    cin >> str;
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
}

void compare()
{

    char Str1[100], Str2[100];
    int result, i;

    printf("\n Please Enter the First String  str1:  ");
    cin >> Str1;

    printf("\n Please Enter the Second String str2:  ");
    cin >> Str2;

    for (i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++)
        ;

    if (Str1[i] < Str2[i])
    {
        printf("\n str1 is Less than str2");
    }
    else if (Str1[i] > Str2[i])
    {
        printf("\n str2 is Less than str1");
    }
    else
    {
        printf("\n str1 is Equal to str2");
    }
}
