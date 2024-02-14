#include<iostream>
#include<map>
using namespace std;

void romanInteger (string s) {
    map<string, int> map;
    map["I"] = 1;
    map["V"] = 5;
    map["X"] = 10;
    map["L"] = 50;
    map["C"] = 100;
    map["D"] = 500;
    map["M"] = 1000;
    cout<<s<<endl;
}


int main() {
    string s = "this is me writing something";
    int len = s.length();
    romanInteger("I");
}