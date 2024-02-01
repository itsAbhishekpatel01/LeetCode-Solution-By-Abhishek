#include <bits/stdc++.h>
using namespace std;
#define n 1000000
vector<bool> is_prime(n+1, true);
void seive(){
is_prime[0] = is_prime[1] = false;
for (int i = 2; i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}
}
int main() {
	// your code goes here
    seive();
    int t; cin>>t;
    if(is_prime[t]) cout<<"YES";
    else cout<<"NO";
    return 0;
}