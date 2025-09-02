#include "book.exe"

int main() {
    // Create two Book objects
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 180);
    Book book2("To Kill a Mockingbird", "Harper Lee", 281);

    // Call the display() method for each
    book1.display();
    book2.display();

    return 0;
}