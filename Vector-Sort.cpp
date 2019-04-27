#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int elemansayisi,elemanlar;
    vector<int>vec;
    cin>>elemansayisi;
    
    for(int i=0;i<elemansayisi;i++)
   {
       cin>>elemanlar;
       vec.push_back(elemanlar);
   }
   sort(vec.begin(), vec.end());
   for (int i = 0; i < elemansayisi; i++) {
   cout<<vec[i]<<" ";
   }
   return 0;
}
