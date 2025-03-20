#include <iostream>
using namespace std;

int main() {
  string doremi[] = {"do", "re", "mi", "fa","so", "la", "si"};
  string instruments[] = {"piano","ukelele","flute"};
  cout << "Mummy asked me to practice instruments:\n";
  for (int i = 0; i <= 2; i = i + 1) {
    cout << "\n" << instruments[i] << "\n";
      for (int i = 0; i <= 6; i = i + 1) {
      cout << doremi[i] << "\n";    
      }   
  }
  return 0;
}
