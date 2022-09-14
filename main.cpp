#include <cmath>
#include <cstdio>
#include <string>
#include <tuple>
#include <utility>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

std::pair<string, string> split(string s, char delim) {
    std::pair<string, string> out;
    bool is_split = false;

    for(char c : s) {
        if(c == delim && !is_split) {
            is_split = true;
            continue;
        }

        if(!is_split)
            out.first += c;
        else
            out.second += c;
    }
    
    return out;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string n_str;
    getline(cin, n_str);
    int n = std::stoi(n_str);

    std::unordered_map<string, string> map;
    
    for(int i = 0; i < n; i++) {
        string line;
        std::getline(cin, line);

        auto entry = split(line, ' ');
        map.insert(entry);
    }

    while(cin.eof() == false) {
        string name;
        cin >> name;

        auto it = map.find(name);
        if(it != map.end()) {
            cout << it->first << "=" << it->second << '\n';
        } else {
            cout << "Not found\n";
        }
    }

    return 0;
}
