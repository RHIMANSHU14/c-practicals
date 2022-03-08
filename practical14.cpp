#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char t;
    FILE *p1;
    FILE *p2;
    p1 = fopen("practical14.txt", "r");
    p2 = fopen("practical14%.txt", "w");

    if (p1 == NULL)
        cout << "nothing in file";
    else
    {
        t = fgetc(p1);
        while (t != EOF)
        {
            if (t != ' ')
            {
                fputc(t, p2);
            }
            t = fgetc(p1);
        }
    }
    fclose(p1);
    fclose(p2);

    return 0;
}