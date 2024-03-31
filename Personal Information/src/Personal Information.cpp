#include <iostream>
#include <string>

using namespace std;

int main() {

    string firstName, lastName, streetAddress, city, zipCode;

    cout << "Enter your first name: ";
    getline(cin, firstName);

    cout << "Enter your last name: ";
    getline(cin, lastName);

    cout << "Enter your street address: ";
    getline(cin, streetAddress);

    cout << "Enter your city: ";
    getline(cin, city);

    cout << "Enter your zip code: ";
    getline(cin, zipCode);

    cout << "\n\n";
    cout << "Personal Information:\n";
    cout << "---------------------\n";
    cout << "First Name: " << firstName << "\n";
    cout << "Last Name: " << lastName << "\n";
    cout << "Street Address: " << streetAddress << "\n";
    cout << "City: " << city << "\n";
    cout << "Zip Code: " << zipCode << "\n";

    return 0;
}
