#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
public:
    int age;

    Person(int initial_age) {
        if(initial_age < 0) {
            cout << "Age is not valid, setting age to 0.\n";
            age = 0;
        } else age = initial_age;

    }

    int yearPasses() {
        return ++age;
    }

    void amIOld() {
        if(age < 13)
            cout << "You are young.\n";
        else if(age < 18)
            cout << "You are a teenager.\n";
        else
            cout << "You are old.\n";
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}

