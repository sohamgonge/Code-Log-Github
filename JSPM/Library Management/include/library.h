#ifndef LIBRARY_H
#define LIBRARY_H

class library
{
private:
    int reqMem_id{}; // Required Members
    int brdBooks{};  // Borrowed Books
    string name{};   // Name
    int cnctNo{};    // Contact Number

public:
    // Constructors
    library() = default;
    library(int preqMem_id, int pbrdBooks, string pname, int pcnctNo);

    // Getters
    int get_reqMember_id();
    int get_brdBooks();
    string get_name();
    int get_cnctNo();

    // Setters
    void get_reqMember_id(int preqMem_id);
    void get_brdBooks(int pbrdBooks);
    void get_name(string pname);
    void get_cnctNo(int pcnctNo);

    // Functions
    void issueBook();

    void returnBooks();

    void renewBooks();

    void calculateFine();
};
#endif