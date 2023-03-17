#include <iostream>
#include <cstring>

using namespace std;

struct String {
    int n;
    char* str;
    String ( char* s) {
        n = strlen(s);
        str = new char [n];
        str = s;
    }
    ~String () {
        delete [] str;
        str = NULL;
    }
    void print() {
        cout << str << endl;
    }
    void append( char* t) {
        int m = strlen(t);
        str = new char(n+m);
        for(int i = 0;i < m;i++)
        {
            str[i+n] +=t[i];
        }
    }
};

int main() {
    String s("Hello");
    s.append("Phuoc");
    cout << s.str;
    return 0;
}
