#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <cstring>
using namespace std;

class book
{
private:
    string title;
    string author;
    string genre;
    string isbn;
    int totalCopies;
    int availableCopies;

public:
    // Constructors
    book() = default;
    book(string ptitle, string pauthor, string pgenre, string pisbn, int ptcopies, int pacopies);

    // Getters
    string get_title() const ;
    string get_author() const ;
    string get_genre() const ;
    string get_isbn() const ;
    int get_tcopies() const ;
    int get_acopies() const ;

    // Setters
    void set_title(string ptitle);
    void set_author(string pauthor);
    void set_genre(string pgenre);
    void set_isbn(string pisbn);
    void set_tcopies(int ptcopies);
    void set_acopies(int pacopies);

    // operator overloading
    friend ostream &operator<<(ostream &os, const book &b);
};
#endif