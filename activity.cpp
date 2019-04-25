#include <iostream>
#include <vector>
#include "activity.h"

using namespace std;

vector<Book*> addBook(vector<Book*> name)
{
        string t = "temp";
        int y;
        while (t != "quit")
        {
                cout<< "ADD: Enter the book title to add (enter quit to exit)."<<endl;
                getline(cin,t);

                if (t != "quit")
                {
                        cout<<"Please enter the year of the new book."<<endl;
                        cin>>y;
                        cin.ignore();

                        Book *ptrx = new Book(t,y);

                        name.push_back(ptrx);

                }
        }
        cout<<endl;
        return name;
}

void displayBooks (vector<Book*> books)
{
        cout<<"Here is a list of all the current books in the database."<<endl;
        
        for (int i = 0; i < books.size(); i++)
        {
                cout<<"index = "<<i<<" TITLE = "<<books[i]->getTitle()<<endl;
                cout<<"          YEAR  = "<<books[i]->getYear()<<endl;
        }
       // cout<<endl;
}

vector<Book*> deleteBook(vector<Book*> books)
{
        string name;
        cout<<"DELETE: Please enter the book title to be deleted."<<endl;
        getline(cin,name);

        for (int i = 0; i<books.size(); i++)
        {
                if (name == books[i]->getTitle())
                {
                        cout<<"FOUND: deleting book stored at index = "<<i<<endl;
                        delete books[i];
                        books.erase(books.begin() + i);
                }
        }
        cout<<endl;
        return books;
}
