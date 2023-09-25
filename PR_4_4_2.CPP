#include <iostream>
#include <string>
using namespace std;

string max(string a, string b, string c)
{
    return max(max(a, b), c);
}
int main()
{
    string str1, str2, str3;
    cout << "Enter three strings: ";
    cin >> str1 >> str2 >> str3;
    string max_str = max(str1, str2, str3);
    cout << "The maximum string is: " << max_str << endl;

    return 0;
}