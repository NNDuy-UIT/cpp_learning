#include <iostream>
#include <iomanip>
#include <climits>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
#include <cmath>
using namespace std;

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

struct student
{
    string name, dob, address;
    int toan, ly, hoa;

    int total(){
        return toan + ly + hoa;
    }

    string getResult(){
        stringstream builder;
        if (total() > 24){
            builder << "DO";
        }
        else builder << "TRUOT";
        return builder.str();
    }

    string toString(){
        stringstream builder;
        builder << name << " " << dob << " " << address << " " << total() << " " << getResult();
        return builder.str();
    }
};


int main() {
    int n; cin >> n;
    vector<student> v(n);
    for (int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, v[i].name);
        getline(cin, v[i].dob);
        getline(cin, v[i].address);
        cin >> v[i].toan >> v[i].ly >> v[i].hoa;
    }
    auto ThuKhoa = max_element(v.begin(), v.end(), [](const student &a, const student &b){
        return (a.toan + a.ly + a.hoa) < (b.toan + b.ly + b.hoa);
    });
    cout << "DANH SACH THU KHOA:" << endl;
    for (auto value : v){
        if (value.total() == ThuKhoa ->total()){
            cout << value.name << " " << value.dob << " " << value.address << " " << value.total() << endl;
        }
    }
    cout << "KET QUA XET TUYEN:" << endl;
    for (auto value : v){
        cout << value.toString() << endl;
    }
  return 0;
}