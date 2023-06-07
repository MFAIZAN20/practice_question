/* Exercise Practice Questions : 2 || Question No. 5 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class bookType
{
   string title;
   string auther[4];
   string publisher;
   string ISBN;
   double price;
   int year_publish;
   int numAuther;
   int numCopy;
   public:
   bookType(string tit = "Null",string aut = "Null",string pub = "Null",string ibn = "Null",double pri = 0.0,int copy = 0,int p_year = 1900)
   {
        settitle(tit);
        setauthers(aut);
        setpublisher(pub);
        setISBN(ibn);
        setprice(pri);
        setNum_Copies(copy);
        setpublish_year(p_year);
   }

    /* Setter Functions */

    void settitle (string titl)
    {
        if(!titl.empty())
        {
            title = titl;
        }
        else 
        {
            title = "Noname";
        }
    }

    void setauthers (string aut)
    {
        if (numAuther < 4)
        {
            auther[numAuther] = aut;
        }
        else if (numAuther < 0 && numAuther > 4)
        {
            cout<<"Invalid Number OF Authers"<<endl;
        }   
    }
    void setpublisher (string publish)
    {
        if (!publish.empty())
        {
            publisher = publish;
        }
        else
        {
            publisher = "No One";
        }
                
    }
    void setISBN (string isbn)
    {
        if (!isbn.empty())
        {
            ISBN = isbn;
        }
        else
        {
            ISBN = "0000";
        }
    }
    void setprice (double pri)
    {
        if (pri >= 0)
        {
            price = pri;
        }
        else
        {
            price = 0;
        }
    }
    void setpublish_year (int year)
    {
        if (year >= 1900)
        {
            year_publish = year;
        }
        else
        {
            year_publish = 1900;
        }
    }

    void setnum_Auther (int aut)
    {
        if (aut >= 0 && aut <= 4)
        {
            numAuther = aut;
        }
        else
        {
            numAuther = 0;
        }
    }
    void setNum_Copies(int copies)
    {
        if (copies >= 0 && copies <= 100)
        {
            numCopy = copies; 
        }
        else
        {
            numCopy = 100;
        }
    }

    /* Getter Functions */
    string gettitle () const
    {
        return title;
    }

    string getauther (int num) const
    {
        if (num > 0 && num <= getnum_Auther())
        {
            return auther[num];
        }
        else
        {
            return "";
        }
    }

    string getpublisher () const
    {
        return publisher;
    }

    string getISBN () const
    {
        return ISBN;
    }

    double getprice () const
    {
        return price; 
    }

    int getPublish_year () const
    {
        return year_publish;
    }

    int getnum_Auther () const
    {
        return numAuther;   
    }

    int getnum_copies () const
    {
        return numCopy;
    }

    /* Check and Update Functions */
    bool check_title(string ch_title)
    {
        /* This Will The Title If it Matched With The Pass Parameter */
        return (title == ch_title);
    }
    bool check_ISBN(string ch_isbn)
    {
        /* This Will return True IF the Pass Auther Name Match in the Array of books */
        return (ISBN == ch_isbn);
    }

    void updatecopies(int n_copies)
    {
        numCopy = numCopy + n_copies;
    }

};
int main()
{
    bookType books[100];
    // Test adding book information
    books[0] = bookType("Discrete Mathematics", "Kamla", "by nu Publisher","",1299, 10, 1925);

    // Test searching for a book by title
    for (int i = 0; i < 100; i++) 
    {
        if (books[i].check_title("Discrete Mathematics")) 
        {
            cout << "Foundbook: " << books[i].gettitle() << endl;
            break;
        }
    }

    // Test searching for a book by ISBN
    for (int i = 0; i < 100; i++) {
        if (books[i].check_ISBN("978-0743273565")) {
            cout << "Found book: " << books[i].gettitle() << endl;
            break;
        }
    }

    // Test updating the number of copies of a book
    for (int i = 0; i < 100; i++) 
    {
        if (books[i].check_title("Discrete Mathematics")) 
        {
            books[i].updatecopies(5);
            cout << "Updated number of copies of The Great Gatsby: " << books[i].getnum_copies() << endl;
            break;
        }
    }

    // Test getting the year of publication of a book
    for (int i = 0; i < 100; i++) 
    {
        if (books[i].check_title("Discrete Mathematics")) 
        {
            cout << "Year of publication of The Discrete Mathematics: " << books[i].getPublish_year()<<endl;
            break;
        }
    }

    return 0;
}