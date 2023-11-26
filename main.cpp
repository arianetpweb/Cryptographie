#include <iostream>
using namespace std;

string chiffrementCesar(string message, int decalage) {
    string resultat = "";
    for (int i = 0; i < message.length(); i++) {
        if (isalpha(message[i])) {
            char c = message[i];
            if (isupper(c)) {
                c = (c - 'A' + decalage) % 26 + 'A';
            } else {
                c = (c - 'a' + decalage) % 26 + 'a';
            }
            resultat += c;
        } else {
            resultat += message[i];
        }
    }
    return resultat;
}

string dechiffrementCesar(string message, int decalage) {
    return chiffrementCesar(message, 26 - decalage);
}

int main() {
    string message = "Bonjour le monde !";
    int decalage = 3;

    string messageChiffre = chiffrementCesar(message, decalage);
    string messageDechiffre = dechiffrementCesar(messageChiffre, decalage);

    cout << "Message original : " << message << endl;
    cout << "Message chiffré : " << messageChiffre << endl;
            cout << "Message déchiffré : " << messageDechiffre << endl;

        return 0;
}
