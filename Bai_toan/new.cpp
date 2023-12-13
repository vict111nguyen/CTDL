#include <bits/stdc++.h>
#include <set>   
#include <map>

using namespace std;

int main(){
    map<int, int> mp;
    mp[100] = 200;
    mp[200] = 300;
    // mp.insert({100, 300});
    mp[100] = 300;
    mp.insert({300, 199});

    // for(pair<int, int> x : mp){
    //     cout << x.first << " " << x.second << endl;
    // }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }

    for(map<int, int>::iterator it = mp.begin(); it !=mp.end(); it++){
        cout << (*it).first << " "<< (*it).second << endl;
    }

    return 0;
}
