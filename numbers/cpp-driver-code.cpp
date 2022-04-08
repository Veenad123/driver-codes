#include <iostream>

#include<bits/stdc++.h>
using namespace std;

string solve (int n) {
   int sum=0;
   while(n >0 || sum > 9)
   {
      if( n == 0)
      {
         n=sum;
         sum=0;
      }
      sum += n % 10;
      n /=10;
   }
   return(sum == 1);
}
  

// The main function reads the input in the required format.
// Just complete the solve function above.
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int n;
        cin >> n;
        string out_;
        out_ = solve(n);
        cout << out_;
        cout << "\n";
    }
}
