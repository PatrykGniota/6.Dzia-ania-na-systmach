#include <iostream>
using namespace std;
int main() {

  string num = "0123456789ABCDEF";
  string s1 = "";
  string s2 = "";
  string f = "";
  int sum = 0;
  int p = 0;
  int baseSystem;

  cout << "Give number: "; cin >> s1;
  cout << "Give number: "; cin >> s2;
  cout << "What system: "; cin >> baseSystem;

  for(int i = s1.size()-1; i >= 0; i--){
    sum = p + num.find(s1[i]) + num.find(s2[i]);
    f = num[sum % baseSystem] + f;
    p = num.find(to_string(sum / baseSystem));
  }
  if(p){
    f = num[p] + f;
  }
  cout << "Sum: " << f << endl;
  
}