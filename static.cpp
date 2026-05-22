#include <iostream>
#include <string>
using namespace std;

class Book {
  private:
    string title;
    string author;
  
  public:
    static int totalBooks; 

  
  Book(string bookTitle, string bookAuthor){
    title = bookTitle;
    author = bookAuthor;
    totalBooks++;
  }
  
  static void displayTotalBooks(){
    cout << "Total number of books in the library: " << totalBooks << endl;
  }
  
  void displayBookInfo(){
    cout << "Book Title: " << title << ", Author: " << author << endl;
  }

};



int Book::totalBooks = 0;

int main(){
  Book book1("The Catcher in the Rye", "J.D Salinger");
  Book book2("To Kill a Mockingbird", "Harper Lee");
  Book book3("1984", "George Orwell");

  
  Book::displayTotalBooks();
  
  book1.displayBookInfo();
  book2.displayBookInfo();
  book3.displayBookInfo();

  Book book4("Pride and Prejudice", "Jane Austen");
  Book book5("The Great Gatsby", "F. Scott Fitzgerald");

  Book::displayTotalBooks();
  
  return 0;

}
