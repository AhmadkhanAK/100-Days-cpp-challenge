#include <iostream>

using namespace std;

int Vowel_Count(string text) {
  int ctr = 0;
  for(int i = 0; i < int(text.size()); i++){
    if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
      ++ctr;
    if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U')
      ++ctr;
  }
  return ctr;

}

int main() {
        cout << "Original string: eagerer, number of vowels -> " << Vowel_Count("eagerer") << endl;
        cout << "\nOriginal string: eaglets, number of vowels -> " << Vowel_Count("eaglets") << endl;
        cout << "\nOriginal string: w3resource, number of vowels -> " << Vowel_Count("w3resource") << endl;
        cout << "\nOriginal string: After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday., number of vowels -> ";
		cout << Vowel_Count("After eagling the Road Hole on Thursday, he missed an 8-footer for birdie Friday.") << endl;
        return 0;
}
