#include <bits/stdc++.h>

using namespace std;


string timeConversion(string s) {
  int number = stoi(s.substr(0,2));  //stoi:string'i  integera çeviren fonksiyon 
    //8.karakterin P veya A olmasını kontrol ederek sabah veya akşam olduğunu anlıyoruz.
    if(s[8] == 'P' && number != 12)
    {
        number += 12;//eğer pm ise akşam olacağından 12 saat ekliyoruz.
    }
    if(s[8] == 'A' && number == 12)
    {
        number = 0;
    }

    string time = "";
    if(number < 10)
    {
      
        time += '0';
    }
    time += to_string(number);  //integerı  stringe çeviren fonksiyon

    time += s.substr(2,6);  //substr:string'in bir kısmını almamızı sağlayan fonksiyon

    return time;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
