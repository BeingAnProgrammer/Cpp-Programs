/* This is a program to check whether a no is palindrome or not using while loop
  What is palindrome:
  A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward

  for eg if the user inputs n=232  , since its reverse is also same so its a palindrome
    or n=123 its rev is 321 which is not same as the original so its not palindrome             */

#include <iostream>
using namespace std;

int main()
{

  int n, rev = 0, save;
  cout << "Enter a no to find if its palinderome or not = ";
  cin >> n;
  save = n;

  while (n > 0)
  {
    rev = rev * 10 + n % 10;
    n = n / 10;
  }
  if (rev == save)
    cout << "Its palindrome!!";
  else
    cout << "Its Not a palindrome!!";

  return 0;
}