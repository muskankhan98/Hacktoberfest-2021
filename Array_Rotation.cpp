#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while( t-- )
  {
    long long int n, k;
    cin >> n >> k;
    long long int a[n];
    for( int i = 0; i < n; i++ )
    cin >> a[i];
     k = k%n;
    for( int i = n-k; i < n; i++ )
    cout << a[i] << " ";
    for( int i = 0; i < n-k; i++ )
    cout << a[i] << " ";
    
    cout << endl;
    
  }
}
