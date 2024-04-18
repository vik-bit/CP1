#include <bits/stdc++.h>
using namespace std;




int main() {
    long long int t;
    cin >> t;

    while (t--) {
        int n, c, d,x;
        cin >> n >> c >> d;

        vector <long long int> a;
        long long int arr[n][n];
         vector<long long int> b;
       

        for (int i = 0; i < n * n; i++) {
            cin >> x;
            a.push_back(x);
            
        }
        sort(a.begin(),a.end());
         
        for (int i = 0; i < n; i++) {
            
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0){
                    arr[i][j] = a[0];
                    b.push_back(arr[i][j]);
                }
                else{
                    arr[i][j] = arr[0][0] + c * i + j * d;
                    b.push_back(arr[i][j]);
                }
            }
        }
         sort(b.begin(),b.end());

      cout << (a == b ? "YES" : "NO") << '\n';

        
       
    }

    return 0;
}
