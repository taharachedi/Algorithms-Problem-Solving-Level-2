#include <iostream>
#include <string>
using namespace std;


string Read_Text() {

    string Text = "";

    cout << "Please Enter Ur Text : \n";
    getline(cin, Text);

    return Text;
}


string Encrypt_Text(string Text, short EncryptionKey) { 

    for (int i = 0; i < Text.length(); i++)
    {
        Text[i] = char((int)Text[i] + EncryptionKey);
    }

    return Text;
}


string Decrypt_Text(string Text, short EncryptionKey) {

    for (int i = 0; i < Text.length(); i++)
    {
        Text[i] = char((int)Text[i] - EncryptionKey);
    }

    return Text;
}


int main()
{
    system("color 6F");

    const short EncryptionKey = 2;  //this is the key.

    string Text = Read_Text();
    string Text_After_Encryption = Encrypt_Text(Text, EncryptionKey);
    string Text_After_Decryption = Decrypt_Text(Text_After_Encryption, EncryptionKey);

    cout << "\nText Before Encryption : " << Text << endl;
    cout << "\nText After Encryption : " << Text_After_Encryption << endl;
    cout << "\nText After Decryption : " << Text_After_Decryption << endl;


    system("pause>0");
    return 0;
}
