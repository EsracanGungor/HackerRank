#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    cin>>a;
    string b;
    cin>>b;

    string birlestir=a+b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<birlestir<<endl;
 
      int temp;
      temp=a[0];
      a[0]=b[0];
      b[0]=temp;
      cout<<a<<" "<<b<<endl;
  
    return 0;
}

