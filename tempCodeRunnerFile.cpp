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

}*/

//Optimized space 0(1)
int fib(int n) {
    if(n <= 1) return n;
    int prev= 0;
    int prev2 = 1;
    for(int i=2; i<=n; i++){
        int curri = prev + prev2;
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