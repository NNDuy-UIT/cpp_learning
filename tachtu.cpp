#include <iostream>
#include <iomanip>
#include <climits>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <cmath>
using namespace std;

long long mod = 1e9 + 7;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

vector<string> split(string haystack, string needle){
    vector<string> res;
    int startpos = 0;
    int foundpos = haystack.find(needle, startpos);
    while (foundpos != string::npos){
        int count = foundpos - startpos;
        string token = haystack.substr(startpos, count);
        if (!token.empty()){
            res.push_back(token);
        }
        startpos = foundpos + needle.length();
        foundpos = haystack.find(needle, startpos);
    }
    string last_token = haystack.substr(startpos, haystack.length() - startpos);
    if (!last_token.empty()){
        res.push_back(last_token);
    }
    return res;
}

int main()
{
    string s = "Nguyen---Nam----Duy";
    auto text = split(s, "-");
    for (string word : text){
        cout << word << " ";
    }
}