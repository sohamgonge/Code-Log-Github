#ifndef BOOK_H
#define BOOK_H

#include<iostream>
#include<cstring>
using namespace std;

class book{
    private:
        string title;
        string author;
        string genre;
        int tcopies;
        int acopies;
        int overDue; // so that we can count how many of them are overdue


    public: 
        // Constructors
        book() = default;
        book(string ptitle, string pauthor, string pgenre, int ptcopies, int pacopies);

        // Getters
        string get_title();
        string get_author();
        string get_genre();
        int get_tcopies();
        int get_acopies();
        
        // Setters
        void set_title(string ptitle);
        void set_author(string pauthor);
        void set_genre(string pgenre);
        void set_tcopies(int ptcopies);
        void set_acopies(int pacopies);
};
#endif 