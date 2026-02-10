#include <iostream>
#include <cstring>
using namespace std;

void swapChar(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

void perm(char str[], int i, int n)
{
    if (i == n)
    {
        cout << str << endl;
        return;
    }

    for (int j = i; j < n; j++)
    {
        swapChar(str[i], str[j]);   
        perm(str, i + 1, n);        
        swapChar(str[i], str[j]);   
    }
}

int main()
{
    char str[] = "ABC";
    int n = strlen(str);

    cout << "All permutations are:\n";
    perm(str, 0, n);

    return 0;
}
