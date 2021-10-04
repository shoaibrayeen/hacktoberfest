#include <iostream>

using namespace std;

int main() {
    string number;
    cin >> number;

    map<char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int n = number.size();
    int ans = mp[number[n-1]];
    for(int i = n-2; i >= 0; i--){
        if(mp[number[i]] < mp[number[i+1]]){
            ans -= mp[number[i]];
        }else{
            ans += mp[number[i]];
        }
    }
    cout << "The integer equivalent of the roman number" << number << " is " ans << "\n";

    return 0;
}