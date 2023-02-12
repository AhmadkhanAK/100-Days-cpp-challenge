#include <iostream>

#include<algorithm>

using namespace std;
 
    bool is_Subsequence(string subse, string word) {
        int j=0;
        for(int i=0;i<subse.size();i++)
		{
            if(word[j]==subse[i])j++;
        }
      return (j==word.size())?true : false;
    }

int main()
{
 
  string word1 = "apple";
  string subse1 = "apl";
  cout << "word1: " << word1;
  cout << "\nsubse1: " << subse1;
  cout << "\nIs subse1 is the subsequence of word1? " << is_Subsequence(word1, subse1);
  string word2 = "apple";
  string subse2 = "ppe";
  cout << "\n\nword2: " << word2;
  cout << "\nsubse2: " << subse2;
  cout << "\nIs subse2 is the subsequence of word2? " << is_Subsequence(word2, subse2);
  string word3 = "ACGGTGTCGTGCTATGCTGATGCTGACTTATATGCTA";
  string subse3 = "CGTTCGGCTATGCTTCTACTTATTCTA";
  cout << "\n\nword3: " << word3;
  cout << "\nsubse3: " << subse3;
  cout << "\nIs subse3 is the subsequence of word3? " << is_Subsequence(word3, subse3);
  string word4 = "CGTTCGGCTATCGTACGTTCTATTCTATGATTTCTAA";
  string subse4 = "CGTTCGGCTATGCZTTCTACTTATTCTA";
  cout << "\n\nword4: " << word4;
  cout << "\nsubse4: " << subse4;
  cout << "\nIs subse4 is the subsequence of word4? " << is_Subsequence(word4, subse4);     
  return 0;    
}
