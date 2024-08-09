#include <iostream>
using namespace std;
class Book
{
private:
    string title;
    string author;
    int year;
    public:

    Book(string tit, string ath, int yr)
    {
        title = tit;
        author = ath;
        year = yr;
    }
    string getTitle()
    {
        return title;
    }
    string getauthor()
    {
        return author;
    }
    int getyear()
    {
        return year;
    }
};
int main()
{
    Book b1("harry potter", " JK Rowling", 2008);
    cout << "Title: " << b1.getTitle() << endl;
    cout << "Author: " << b1.getauthor() << endl;
    cout << "Year: " << b1.getyear() << endl;

    return 0;
}
