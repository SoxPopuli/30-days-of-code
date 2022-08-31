#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

bool in_range(int val, int low, int high) {
    return (val >= low && val <= high);
}

bool is_weird(int n) {
    if(n % 2 == 1) {
        return true;
    } else {
        if( in_range(n, 2, 5) ) 
            return false;
        else if( in_range(n, 6, 20) )
            return true;
    }

    return false;
}

int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    if( is_weird(N) )
        cout << "Weird\n";
    else
        cout << "Not Weird\n";

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
