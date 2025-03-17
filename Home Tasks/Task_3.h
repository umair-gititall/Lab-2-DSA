#pragma once
#include <iostream>
using namespace std;

class Book {
	string name, author;
	int pages;
public:
	Book() {}
	Book(string n, string a, int p) : name(n), author(a), pages(p) {}
	void display() const { cout << name << "," << author << "," << pages << endl; }
	int getpages() const { return pages; }
	string getname() { return name; }
};

class Newspaper {
	string company, date, edition;
public:
	Newspaper() {}
	Newspaper(string c, string d, string e) :company(c), date(d), edition(e) {}
	void display() const { cout << company << "," << date << "," << edition << endl; }
	string getedition() const { return edition; }
	string getcompany() { return company; }
};

template<typename t>
t* grow(t* arr, int &size)
{
	t* temp = new t[++size];

	for (int i = 0; i < size - 1; i++)
		temp[i] = arr[i];

	delete[] arr;
	return temp;
}


class Library {
	Book* books;
	int booksize, newspapersize;
	Newspaper* newspapers;
public:
	Library() :books(new Book[0]), newspapers(new Newspaper[0]), booksize(0), newspapersize(0) {}
	void addBook(Book obj)
	{
		books = grow(books, booksize);
		books[booksize - 1] = obj;
	}
	void addNewspaper(Newspaper obj)
	{
		newspapers = grow(newspapers, newspapersize);
		newspapers[newspapersize - 1] = obj;
	}
	void displayCollection()
	{
		cout << "Books :: " << endl;
		for (int i = 0; i < booksize; i++)
			books[i].display();

		cout << "Newspaper :: " << endl;
		for (int i = 0; i < newspapersize; i++)
			newspapers[i].display();
	}
	void sortBooksByPages()
	{
		for (int i = 0; i < booksize; i++)
			for (int j = i + 1; j < booksize; j++)
				if (books[i].getpages() < books[j].getpages())
					swap(books[i], books[j]);
	}
	void sortNewspapersByEdition()
	{
		for (int i = 0; i < newspapersize; i++)
			for (int j = i + 1; j < newspapersize; j++)
				if (newspapers[i].getedition()[0] < newspapers[j].getedition()[0])
					swap(newspapers[i], newspapers[j]);
	}
	Book* searchBookByTitle(string s)
	{
		for (int i = 0; i < booksize; i++)
			if (books[i].getname() == s)
				return &books[i];
	}
	Newspaper* searchNewspaperByName(string s)
	{
		for (int i = 0; i < newspapersize; i++)
			if (newspapers[i].getcompany() == s)
				return &newspapers[i];
	}
};