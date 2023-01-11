#include <iostream>
using namespace std;
int main() {
  string odjemna = "3213";
  string odjemnik = "3031";
  string sum = "";
  int difference;
  bool loan = false;
  int baseSystem = 4;

  for(int i = odjemna.size()-1; i >= 0; i--){
    if(loan){
      odjemna[i] = odjemna[i] -  1;
    }
    loan = false;
    difference = odjemna[i] - odjemnik[i];
    if(difference < 0){
      loan = true;
      difference += baseSystem;
    }
    sum = to_string(difference) + sum;
  }
  for(int i = 0; i < sum.size();i++){
    if(sum[i] == '0'){
      sum.erase(i,1);
    }
    else{
      break;
    }
  }
  cout << sum << endl;
}