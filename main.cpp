#include <string>
#include <cstdio>
#include <iostream>

int main(int argc, char* argv[]) {
    int i;
    double d;
    std::string s;
    char charbuf[256];

    std::cin.getline(charbuf, 256);
    i = std::stoi(charbuf);

    std::cin.getline(charbuf, 256);
    d = std::stod(charbuf);

    std::cin.getline(charbuf, 256);
    s = std::string(charbuf);


    std::printf("%d\n", i + 4);
    std::printf("%e\n", d + 4.0);
    std::printf("HackerRank %s\n", s.c_str());
}
