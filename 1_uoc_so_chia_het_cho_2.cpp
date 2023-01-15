#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2 != 0){
            cout << "0\n"; continue;
        }
        n /= 2;
        int ans = 1;
        for(int i = 2;  i<= sqrt(n); i++){
            if(n % i == 0){
                int cnt = 0;
                while(n%i == 0){
                    n /= i;
                    cnt ++;
                }
                ans *= (cnt + 1);
            }
        }
        if(n > 1) ans *= 2;
        cout << ans << '\n';
    }
}