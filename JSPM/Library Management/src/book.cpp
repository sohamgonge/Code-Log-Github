#include <iostream>
#include "book.h"

book ::book(string ptitle, string pauthor, string pgenre, string pisbn, int ptcopies, int pacopies)
{
    title = ptitle;
    author = pauthor;
    genre = pgenre;
    isbn = pisbn;
    totalCopies = ptcopies;
    availableCopies = pacopies;
}

string book ::get_title() const
{
    return title;
}
string book ::get_author() const
{
    return author;
}
string book ::get_genre() const
{
    return genre;
}
string book ::get_isbn() const
{
    return isbn;
}

int book ::get_tcopies() const
{
    return totalCopies;
}
int book ::get_acopies() const
{
    return availableCopies;
}

void book ::set_title(string ptitle)
{
    title = ptitle;
}
void book ::set_author(string pauthor)
{
    author = pauthor;
}
void book ::set_genre(string pgenre)
{
    genre = pgenre;
}
void book ::set_isbn(string pisbn)
{
    isbn = pisbn;
}
void book ::set_tcopies(int ptcopies)
{
    totalCopies = ptcopies;
}
void book ::set_acopies(int pacopies)
{
    availableCopies = pacopies;
}

ostream& operator<<(ostream& os, const book& b) {
    os << b.title << " | " << b.author << " | " << b.genre
       << " | " << b.isbn << " | " << b.availableCopies << "/" << b.totalCopies;
    return os;
}