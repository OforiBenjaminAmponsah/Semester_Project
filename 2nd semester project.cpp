#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

float balance;
//ifstream new_balance("balance.txt");
//if (new_balance.is_open()) {
//    new_balance >> balance;
//    new_balance.close();
//} else {
//    cout << "Couldn't open file" << endl;
//    return 1;
//}
//
//ofstream transactionHistoryFile("transactionHistory.txt", ios::app); // Open the file in append mode

void saveBalance() {
    // Saving Balance in File
    ofstream new_balance("balance.txt");
    if (new_balance.is_open()) {
        new_balance << balance;
        new_balance.close();
    }
}

//void saveTransactionHistory(const string &transaction) {
//    if (transactionHistoryFile.is_open()) {
//        transactionHistoryFile << transaction << endl;
//    }
//}

int main() {
    int data;
    int language = 1; // Assume English as the default language
    int airtime;
    vector<string> transactionHistory; // Declare a vector to store transaction history

    while (true) {
        cout << "1. Balance Inquiry - *124#" << endl;
        cout << "2. Data Plan Activation - *134#" << endl;
        cout << "3. Recharge Account - *789#" << endl;
        cout << "4. Transaction History - *101#" << endl;
        cout << "5. View Profile - *202#" << endl;
        cout << "6. Customer Support - *303#" << endl;
        cout << "9. Language Selection - *999#" << endl;
        cout << "0. Exit - 0" << endl;
        cout << "Please enter your choice: ";
        
        string ussd;
        cin >> ussd;

        if (language == 2) { // If French is selected
            if (ussd == "*124#") {
                cout << "Votre solde est de : $" << balance << endl;
            } else if (ussd == "*134#") {
                cout << "Forfaits de données disponibles" << endl;
                cout << "1. 500 Mo pour 5,00 $" << endl;
                cout << "2. 1Go pour 10,00 $" << endl;
                cout << "3. 2Go pour 20,00 $" << endl;
                cout << "Choisissez votre forfait de données préféré : ";
                cin >> data;
                if (data == 1) {
			    balance -= 5.0;
			    saveBalance();
			    cout << "Félicitations !! Vous avez acheté 500 Mo de données et votre nouveau solde est de : $" << balance << endl;
			    cout << endl;
			}
			if (data == 2) {
			    balance -= 10.0;
			    saveBalance();
			    cout << "Félicitations !! Vous avez acheté 1 Go de données et votre nouveau solde est de : $" << balance << endl;
			    cout << endl;
			}
			if (data == 3) {
			    balance -= 20.0;
				saveBalance();
			    cout << "Félicitations !! Vous avez acheté 2 Go de données et votre nouveau solde est de : $" << balance << endl;
			    cout << endl;
			}
                // Handle data plan choices in French
                // ...
            } else if (ussd == "*789#") {
                cout << "Forfaits de crédit d'appel disponibles" << endl;
                cout << "1. 50 minutes pour 10,00 $" << endl;
                cout << "2. 1000 minutes pour 20,00 $" << endl;
                cout << "3. 2000 minutes pour 40,00 $" << endl;
                cout << "Choisissez votre forfait de crédit d'appel préféré : ";
                cin >> airtime;
                if (airtime == 1) {
			     balance -= 10.0;
			     saveBalance();
			    cout << "Félicitations !! Vous avez acheté 50 minutes de crédit d'appel et votre nouveau solde est de : $" << balance << endl;
			    cout << endl;
			}
			if (airtime == 2) {
			    balance -= 20.0;
			    saveBalance();
			    cout << "Félicitations !! Vous avez acheté 1000 minutes de crédit d'appel et votre nouveau solde est de : $" << balance << endl;
			    cout << endl;
			}
			if (airtime == 3) {
			    balance -= 40.0;
			    saveBalance();
			    cout << "Félicitations !! Vous avez acheté 2000 minutes de crédit d'appel et votre nouveau solde est de : $" << balance << endl;
			    cout << endl;
			}
                // Handle airtime plan choices in French
                // ...
            } else if (ussd == "*202#") {
                cout << "Profil de l'utilisateur :" << endl;
                cout << "Nom : Kofi Appiagyei" << endl;
                cout << "Numéro de téléphone : 035674884554" << endl;
            } else if (ussd == "*303#") {
                cout << "Contactez le service clientèle au 1-800-123-4567." << endl;
            } else if (ussd == "*999#") {
                cout << "Sélectionnez votre langue préférée :" << endl;
                cout << "1. Anglais" << endl;
                cout << "2. Français" << endl;
                cin >> language;
                if (language == 1) {
                    // Set language to English
                } else if (language == 2) {
                    // Set language to French
                } else {
                    cout << "Choix de langue invalide" << endl;
                }
            } else if (ussd == "0") {
                cout << "Programme en cours de fermeture." << endl;
                break; // Quitter la boucle
            } else {
                cout << "Saisie invalide" << endl;
            }
        } else { // Default to English
            if (ussd == "*124#") {
                cout << "Your balance is: $" << balance << endl;
            } else if (ussd == "*134#") {
                cout << "Available Data plans" << endl;
                cout << "1. 500MB for $5.00" << endl;
                cout << "2. 1GB for $10.00" << endl;
                cout << "3. 2GB for $20.00" << endl;
                cout << "Choose your preferred data plan: ";
                cin >> data;
                if(data == 1){
				balance -= 5.0;
				saveBalance();
				cout << "Congratulations!! You have purchase 500MB of data and your new balance is: $"<< balance<<endl;
				cout << endl;
			}
			if (data == 2){
				balance -= 10.0;
				saveBalance();
				cout << "Congratulations!! You have purchase 1GB of data and your new balance is: $"<< balance<<endl;
				cout << endl;
			}
			if (data == 3){
				balance -= 20.0;
				saveBalance();
				
				cout << "Congratulations!! You have purchase 2GB of data and your new balance is: $"<< balance<<endl;
				cout << endl;
	
			}
                // Handle data plan choices in English
                // ...
            } else if (ussd == "*789#") {
                cout << "Available airtime plans" << endl;
                cout << "1. 50mins for $10.00" << endl;
                cout << "2. 1000mins for $20.00" << endl;
                cout << "3. 2000mins for $40.00" << endl;
                cout << "Choose your preferred airtime plan: ";
                cin >> airtime;
                if(airtime == 1){
			balance -= 10.0;
			// Saving Balance in File 
			ofstream new_balance("balance.txt");
			if (new_balance.is_open()){
				new_balance << balance;
				new_balance.close();
			}
			cout << "Congratulations!! You have purchase 50mins of airtime and your new balance is: $"<< balance<<endl;
			cout << endl;
	    	}
					if (airtime == 2){
				balance -= 20.0;
				cout << "Congratulations!! You have purchase 1000mins of airtime and your new balance is: $"<< balance<<endl;
				cout << endl;
			}
			if (airtime == 3){
				balance -= 40.0;
				cout << "Congratulations!! You have purchase 2000mins of airtime and your new balance is: $"<< balance<<endl;
				cout << endl;
	
			}
		
                // Handle airtime plan choices in English
                // ...
            } else if (ussd == "*202#") {
                cout << "User Profile:" << endl;
                cout << "Name: Kofi Appiagyei" << endl;
                cout << "Phone number: 035674884554" << endl;
            } else if (ussd == "*303#") {
                cout << "Contact customer support at 1-800-123-4567." << endl;
            } else if (ussd == "*999#") {
                cout << "Select your preferred language:" << endl;
                cout << "1. English" << endl;
                cout << "2. French" << endl;
                cin >> language;
                if (language == 1) {
                    // Set language to English
                } else if (language == 2) {
                    // Set language to French
                } else {
                    cout << "Invalid language choice" << endl;
                }
             

            } if (ussd == "0") {
                cout << "Exiting program." << endl;
                break; // Exit the loop
             
            }
              for (vector<string>::const_iterator it = transactionHistory.begin(); it != transactionHistory.end(); ++it) {
				  cout << "- " << *it << endl;
			}
               // Add transaction to history for relevant choices
        if (data >= 1 && data <= 3) {
            transactionHistory.push_back("Data plan purchase");
        } else if (airtime >= 1 && airtime <= 3) {
            transactionHistory.push_back("Airtime purchase");
        }   if (ussd == "*101#") {
        	cout << "Transaction History:" << endl;
//            for (const string &transaction : transactionHistory) {
//                cout << "- " << transaction << endl;
//            }
        }
        
    }
}
    return 0;
}
