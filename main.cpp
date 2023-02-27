#include <iostream>
using namespace std;

string MnozPrzezCfr(int cfr, string liczba, int podst){
  int przn = 0;
  int iloczyn = 0;
  string wynik = "";

  for(int i = liczba.size()-1; i >= 0; i--){
    iloczyn = cfr*(liczba[i] - '0') + przn;
    przn = iloczyn / podst;
    wynik = char(iloczyn % podst + '0') + wynik;
  }
  if (przn > 0){
    wynik = char(przn + '0') + wynik;
  }
}

int main() {
  
  int d = 0;
  int baseSystem = 7;
  string firstNum = "6543";
  string secondNum = "432";
  string f = "0";
  string pom = "";

  for(int i = secondNum.size()-1; i >= 0; i--){
    pom = MnozPrzezCfr(secondNum[i] - '0',firstNum,baseSystem);
    for(int j = 1; j <= d - i; j++){
      pom = pom + '0';
    }
    
  }
  cout << "Iloczyn = " << f;
  return 0;
}