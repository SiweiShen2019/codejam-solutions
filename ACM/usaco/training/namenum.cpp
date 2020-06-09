/*
ID: s9649051
TASK: namenum
LANG: C++                 
*/
#include <bits/stdc++.h>
using namespace std;

vector<string> d;
string name;
unordered_map<char, char> m{
    {'A', '2'}, {'B', '2'}, {'C', '2'},
    {'D', '3'}, {'E', '3'}, {'F', '3'},
    {'G', '4'}, {'H', '4'}, {'I', '4'},
    {'J', '5'}, {'K', '5'}, {'L', '5'},
    {'M', '6'}, {'N', '6'}, {'O', '6'},
    {'P', '7'}, {'R', '7'}, {'S', '7'},
    {'T', '8'}, {'U', '8'}, {'V', '8'},
    {'W', '9'}, {'X', '9'}, {'Y', '9'},
};

void setIO(string s) {
    ios_base::sync_with_stdio(0); cin.tie(0); 
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

string convert(string n) {
    string ret = "";
    for (char c : n) {
        ret += m[c];
    }
    return ret;
}

int main() {
    setIO("namenum");
    // read all names
    ifstream in("dict.txt");
    while (getline(in, name)) {
        d.push_back(name);
    }
    cin >> name;
    bool exist = false;
    for (string s : d) {
        if (name == convert(s)) {
            cout << s << endl;
            exist = true;
        }
    }
    if (!exist)
        cout << "NONE" << endl;
    return 0;
}