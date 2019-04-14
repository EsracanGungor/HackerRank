#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int birincisayi, int ikincisayi, int ucuncusayi, int dorduncusayi){
  int max;
  if (max < birincisayi) {
    max = birincisayi;
  }
  if (max < ikincisayi) {
    max = ikincisayi;
  }
  if (max < ucuncusayi) {
    max = ucuncusayi;
  }
  if (max < dorduncusayi) {
    max = dorduncusayi;
  }
  return max;
}



int main() {
  int birincisayi,ikincisayi,ucuncusayi,dorduncusayi;
  scanf("%d %d %d %d", &birincisayi, &ikincisayi, &ucuncusayi, &dorduncusayi);
  int ans = max_of_four(birincisayi, ikincisayi, ucuncusayi, dorduncusayi);
  printf("%d", ans);

  return 0;
}

