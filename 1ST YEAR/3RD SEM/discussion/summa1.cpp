#include <iostream>
#include 
<cstring>

#include <list>
using namespace std;

int main()
{
  list <char> word;
  string wordO, wordR = "" ;
  cout << "Original Word: ";
  cin >> wordO;
  for (int i = 0; i < wordO.length(); i++)
      word.push_back(wordO{i});

  for (int i = 0; i < wordO.length(); i++)
   {
      wordR = wordR+ word.back();
      word.pop_back();
   }
 cout << "Reverse Word : " << wordR << endl;
 if (word0 == wordR)
      cout << "The words are palindrome!" << endl;
 else
     cout << "The words are not palindrome!" << endl;
 cout << endl;
 system("pause");
}