#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
    int n, q;
    cin >> n >> q;

  
    vector<vector<int>> a(n);
//2 boyutlu dizi olusturma
    for (int i = 0; i < n; i++) {
     
      int k;
      cin >> k;
//k degerlerini diziye atma
      a[i].resize(k);
      for (int j = 0; j < k; j++) {
        cin >> a[i][j];
      }
    }
    //Diziyi yazdirma
    for (int b = 0;b < q; b++) {
      
      int i, j;
      cin >> i >> j;
      cout << a[i][j] << endl;
    }
    return 0;
}

