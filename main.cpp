#include <iostream>
#include <string>

using namespace std;

int main()
{
  string original, backup;
  //get original password
  cout<<"Password: ";
  //gets user input repeatedly until a word at least 8 characters long entered
  original = getPassword();
  //do the same, getting a backup password
  cout<<"\nBackup password: ";
  backup = getPassword();

  //validates that neither password is literally "password"
  if( valid(original) && valid(backup) )
  {
    cout<<"\nThank you.\n";
  }
  else
  {
    cout<<"\nSorry, passwords cannot be 'password'\n";
  }
  return 0;
}

