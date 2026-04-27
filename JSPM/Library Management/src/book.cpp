#include <iostream>
#include <fstream>
#include <book.h>

book ::book(string ptitle, string pauthor, string pgenre, int ptcopies, int pacopies)
{
    title = ptitle;
    author = pauthor;
    genre = pgenre;
    tcopies = ptcopies;
    acopies = pacopies;
}

string book ::get_title()
{
    return title;
}
string book ::get_author()
{
    return author;
}
string book ::get_genre()
{
    return genre;
}
int book ::get_tcopies()
{
    return tcopies;
}
int book ::get_acopies()
{
    return acopies;
}

void book :: set_title(string ptitle){
    title = ptitle;
}
void book :: set_author(string pauthor){
    author = pauthor;
}
void book :: set_genre(string pgenre){
    genre = pgenre;
}
void book :: set_tcopies(int ptcopies){
    tcopies = ptcopies;
}
void book :: set_acopies(int pacopies){
    acopies = pacopies;
}