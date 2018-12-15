#pragma once

#include <string>
#include <iostream>

using namespace std;

class BookInformation {
    private:
        bool inLibrary = true, outLibrary = false;
    public:
        string author;
        string category;
        unsigned int howManyPages;
        bool status;

        BookInformation() { }

        BookInformation(string a, string c, unsigned int p, bool s): author(a), category(c), howManyPages(p), status(s) {}

        void lendBook() {
            if (status == inLibrary)
                status = outLibrary;
            else
                cout << "Book currently out of library!" << endl;
        }

        void returnBook() {
            if (status == outLibrary)
                status = inLibrary;
            else
                cout << "Book already in the library!" << endl;
        }

        friend ostream & operator<<(ostream& out, const BookInformation& book) {
            out << "Author: " << book.author << "\tCategory: " << book.category << "\tPages: " << book.howManyPages << "\tStatus: " << (book.status ? "available" : "not available");
            return out;
        }
};