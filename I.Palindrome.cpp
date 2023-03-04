#include <bits/stdc++.h>
using namespace std;
 
int main()
{
string s;
cin >> s;
int size = s.size();
for (int i =0;i<size/2;i++){
    if (s[i] != s[size - 1 - i]){
        cout << "NO" << endl;
        return 0;
    }
}
cout << "YES" << endl;
}
