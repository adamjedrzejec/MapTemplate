#include "Map.h"														// Defines template Map<Key, Value>
#include "Employee.h"													// Defines class Employee
#include "BookInformation.h"

#include <iostream>

using namespace std;

int main() {
	typedef unsigned int ID; 											// Identification number of Employee
	Map<ID, Employee> database;											// Database of employees
	database.add(761028073, Employee("Jan Kowalski", "salesman", 28)); 	// Add first employee: name: Jan Kowalski, position: salseman, age: 28,
	database.add(510212881, Employee("Adam Nowak", "storekeeper", 54));	// Add second employee: name: Adam Nowak, position: storekeeper, age: 54
	database.add(730505129, Employee("Anna Zaradna", "secretary", 32));	// Add third employee: name: Anna Zaradna, position: secretary, age: 32

	cout << database << endl;											// Print database

	Map<ID, Employee> newDatabase = database;							// Make a copy of database (copy constructor called)
	
	Employee* pE;
	pE = newDatabase.find(510212881);									// Find employee using its ID
	pE->position = "salesman";											// Modify the position of employee
	pE = newDatabase.find(761028073);									// Find employee using its ID
	pE->age = 29;														// Modify the age of employee

	database = newDatabase;												// Update original database (assignment operator called)
	
	cout << database << endl;											// Print original database




	typedef string BookTitle;
	Map<BookTitle, BookInformation> library;
	library.add("Introduction to Algorithms", BookInformation("Thomas H. Cormen", "education", 1312, true));
	library.add("Harry Potter and the Deathly Hallows", BookInformation("J. K. Rowling", "fantasy", 607, false));
	library.add("Little Red Riding Hood", BookInformation("Charles Perrault, Jack Zipes", "fairy tale", 11, true));

	cout << library << endl;

	BookInformation* bI;
	if ( (bI = library.find("Harry Potter and the Deathly Hallows") ) ) {
		bI->howManyPages = 759;
		bI->lendBook();
		bI->returnBook();
	}

	if ( (bI = library.find("Little Red Riding Hood") ) ) {
		bI->lendBook();
	}

	cout << library << endl;
}
