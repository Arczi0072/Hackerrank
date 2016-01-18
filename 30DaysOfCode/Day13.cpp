#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

//Write MyBook class
//Write MyBook class
class MyBook : public Book
    {
    public:
    int price;
    MyBook(string title1 ,string author1,int price1): Book(title1,author1)
        {
            price=price1;   
    }
    void display()
        {
        cout << "Title: " << title << endl;
          cout << "Author: " << author << endl;
          cout << "Price: " << price << endl;
    }
    
};

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}

