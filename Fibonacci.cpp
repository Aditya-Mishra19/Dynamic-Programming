#include <bits/stdc++.h>
using namespace std;

/*
int fib(int n){
    if(n <= 1) return n;
    else
        return fib(n-1) + fib(n-2);
}


//Memoization to get from overlapping problem
int fib(int n, vector<int> &dp) {
    if(n <= 1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fib(n-1, dp) + fib(n-2, dp);

}

*/

//Optimized space 0(1)
int fib(int n) {
    int prev2= 0;
    int prev = 1;
    for(int i=2; i<=n; i++){
        int curri = prev2 + prev;
        prev2 = prev;
        prev = curri;
    }
    return prev;
}

int main() {
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    vector<int> dp(n+1, -1);
    cout << "Fib is: " << fib(n);
    //Tabulation
    // dp[0] = 0;
    // dp[1] = 1;
    // for(int i=2; i<=n; i++){
    //     dp[i]= dp[i-1] + dp[i-2];
    // }
    // cout<<dp[n];
    return 0;
}