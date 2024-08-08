#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define f first
#define s second
#define endl "\n"

bool is_prime(int n){
    if(n == 1){
        return true;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    vi primes;

    for(int i = 2; i <= 20011 ; i++){
        if(is_prime(i)){
            primes.push_back(i);
        }
    }

    while(t--){
        int n;
        cin >> n;
        int a = 1 + n;
        int i;
        for(i = 0; i < primes.size(); i++){
            if(primes[i] >= a){
                a = primes[i];
                break;
            }
        }
        int b = a + n;
        for(; i < primes.size(); i++){
            if(primes[i] >= b){
                b = primes[i];
                break;
            }
        }
        cout << a * b << endl;
    }
    return 0;
}