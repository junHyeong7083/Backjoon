#include<iostream>
#include<stack>
using namespace std;

char decode(char pre, char res) {
    switch (pre) {
        case 'A':
            switch (res) {
                case 'A': return 'A';
                case 'G': return 'C';
                case 'C': return 'A';
                case 'T': return 'G';
            }
        case 'G':
            switch (res) {
                case 'A': return 'C';
                case 'G': return 'G';
                case 'C': return 'T';
                case 'T': return 'A';
            }
        case 'C':
            switch (res) {
                case 'A': return 'A';
                case 'G': return 'T';
                case 'C': return 'C';
                case 'T': return 'G';
            }
        case 'T':
            switch (res) {
                case 'A': return 'G';
                case 'G': return 'A';
                case 'C': return 'G';
                case 'T': return 'T';
            }
    }
    return ' '; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int len;
    cin >> len;
    stack<char> str;
    for (int e = 0; e < len; ++e) {
        char ch;
        cin >> ch;
        str.push(ch);
    }

    char pre = str.top();
    str.pop();
    char res;
    while (!str.empty()) {
        res = str.top();
        str.pop();
        pre = decode(pre, res);
    }

    cout << pre;
    return 0;
}
