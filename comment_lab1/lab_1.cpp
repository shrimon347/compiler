#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    string str = "", s;

    while(cin >> s)
        str += s;
    int n = str.length();

    if(n >= 2 && str[0] == '/' && str[1] == '/')
        cout << "This is Single line Comment" << endl;
    else if(n >= 4&&str[0]== '/' && str[1] == '*' && str[n - 2] == '*' && str[n - 1] == '/')
        cout << "This is Multiple line comment" << endl;
    else
        cout << "This is not comment" << endl;
}
