#include <iostream>
#include <string>

using namespace std;

string getPassword();
bool valid(string);

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

string getPassword()
{
  string entry;
  do
  {
    cin>>entry;
    if( entry.size() < 8 )
        cout<<"Password must be at least 8 characters long.\n";
  }while( entry.size() < 8 );
  return entry;
}

bool valid(string val)
{
  return val != "password";
}
