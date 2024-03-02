#include <iostream>
#include <string.h>
using namespace std;

class publications
{
protected:
    char author[10];

public:
    void get_author()
    {
        cout << "\nENTER THE NAME OF THE AUTHOR: ";
        cin >> author;
    }
    void put_author()
    {
        cout << "\nAUTHOR NAME: " << author << endl;
    }
};

class sales
{
protected:
    int price;

public:
    void get_price()
    {
        cout << "\nENTER THE PRICE: ";
        cin >> price;
    }
    void put_price()
    {
        cout << "\nPRICE: ";
        cout << price;
    }
};

class book : public publications, public sales
{
    char book_name[10];

public:
    void get_name()
    {
        cout << "\nENTER THE NAME OF THE BOOK: ";
        cin >> book_name;
    }
    void put_name()
    {
        cout << "\nNAME OF THE BOOK: ";
        cout << book_name << endl;
    }
};

class pamphlets : public publications
{
protected:
    int size_aka_pages;

public:
    void get_pages()
    {
        cout << "\nENTER THE NUMBER OF PAGES: ";
        cin >> size_aka_pages;
    }
    void put_pages()
    {
        cout << "\nNUMBER OF PAGES: " << size_aka_pages << endl;
    }
};

class notice : public pamphlets
{
    int cost_per_page;

public:
    void get_cost_per_page()
    {
        cout << "\nENTER THE COST PER PAGE: ";
        cin >> cost_per_page;
    }
    void put_cost_per_page()
    {
        cout << "\nCOST PER PAGE: ";
        cout << cost_per_page << endl;
    }
    void total_cost_of_printing()
    {
        cout << "\nTOTAL COST OF PRINTING: ";
        cout << size_aka_pages * cost_per_page << endl;
    }
};

class tape : public publications, public sales
{
    int capacity;

public:
    void get_capacity()
    {
        cout << "\nENTER THE CAPACITY OF TAPE (i.e. NO. OF SONGS CAN BE STORE): ";
        cin >> capacity;
    }
    void put_capacity()
    {
        cout << "\nCAPACITY OF TAPE (i.e. NO. OF SONGS CAN BE STORE): ";
        cout << capacity << endl;
    }
};

int main()
{
    book b;
    b.get_author();
    b.get_name();
    b.get_price();
    b.put_author();
    b.put_name();
    b.put_price();

    tape t;
    t.get_author();
    t.get_capacity();
    t.get_price();
    t.put_author();
    t.put_capacity();
    t.put_price();

    notice n;
    n.get_pages();
    n.get_cost_per_page();
    n.put_pages();
    n.put_cost_per_page();
    n.total_cost_of_printing();

    return 0;
}