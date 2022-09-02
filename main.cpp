#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int count;
    vector<string> inputs;

    cin >> count;
    for(int i = 0; i < count; i++) {
        string s;
        cin >> s;

        inputs.push_back(s);
    }

    for(const auto& s : inputs) {
        auto len = s.size();

        vector<char> even;
        vector<char> odd;

        for(size_t i = 0; i < len; i++) {
            if(i % 2 == 0)
                even.push_back(s[i]);
            else
                odd.push_back(s[i]);
        }

        for(char ch : even) 
            printf("%c", ch);
        printf(" ");
        for(char ch : odd) 
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}

