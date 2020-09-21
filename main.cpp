#include <iostream>
using namespace std;

int main(){
  int cash, cont;

  cout << "Cati bani cash aveti? ";
  cin >> cash;

  cout << "Cati bani aveti in cont? ";
  cin >> cont;

  if(cash > 6500 || (cash + cont) > 6500)
    cout << "Va puteti cumpara o Dacia!";
      else 
        cout << "Mai faceti economii!" << endl;
        
  cout << "La revedere! ";

  return 0;
}