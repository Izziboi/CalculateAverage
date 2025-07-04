// Dieser Code berechnet den Mittelwert von Fortlaufende Eingabe von Gleitpunkt-Zahlen

#include<iostream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    // Variable deklaration
    string input;
    int count = 0;
    double number = 0;
    double sum = 0;
    double average = 0;

    while(true) {
        cout << "Gebe eine Zahl ein: ";
        getline(cin, input); // Annahme von Eingaben

        stringstream ss(input); //Initialisierung des Streams mit dem Inhalt der Eingabezeichenfolge

        if (ss >> number) { // Wenn die Eingabe eine Zahl ist, übergebe den Inhalt von 'ss' and 'number'
            
            count++; // Zähler der eingegebenen Zahlen

            if (count == 1) {
                average = number;
                cout << "Summe: " << number << endl;
                cout << "Zaehlung: " << count << endl;
                cout << "Durchschnitt: " << average << endl;
            }
            else {
                average = (average * (count - 1) + number) / count; //Neuer Mittelwert aus bisherigem Mittelwert, Anzahl und neuem Wert
            
                cout << "Summe: " << average * count << endl;
                cout << "Zaehlung: " << count << endl;
                cout << "Durchschnitt: " << average << endl;
            }
          
            
        }
        else if (input.length() == 1 && tolower(input[0]) == 'x') { // Wenn die Eingabe 'X' ist, brechen
            break;
        }
        else { // Wenn die Eingabe keine Zahl ist, beschwere sich
            cout << "Sie haben keine Zahl eingegeben" << endl;
        }
        cout << endl;
        cout << "******************************" << endl;
        cout << endl;
    }
    
	return 0;
}