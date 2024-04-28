#include "Header_Files.h"

// Defining the functions to encrypt and decrypt the data using XOR Encryption
// Encryption
string encrypt_X_XOR(const string& input_Data_param)
{
    // Declaring Pre-trained neural network model parameters
    vector<int> seq_String = { 1, 0, 1, 0, 1, 0, 1, 0 };
    string encrypted_Data;

    // Using for-loop
    int count = input_Data_param.length(); // Loop iteration according to the string length
    for (size_t i = 0; i < count; i++)
    {
        char current_Char = input_Data_param[i]; // Assigining each character
        int ASCII_Value = static_cast<int>(current_Char); // Char to ASCII

        // Using XOR Phenomena to encrypt
        int encrypted_Values = ASCII_Value ^ seq_String[i% seq_String.size()];

        encrypted_Data += static_cast<char>(encrypted_Values);
    }
    return encrypted_Data; // Return the encrypted string

}

// Decryption
string decrypt_X_XOR(const string& encrypted_Data_Param)
{
    // Declaring Pre-trained neural network model parameters
    vector<int> seq_String = { 1, 0, 1, 0, 1, 0, 1, 0 };
    string decrypted_Data;

    // Using for-loop
    int count = encrypted_Data_Param.length(); // Loop iteration according to the string length
    for (size_t i = 0; i < count; i++)
    {
        char current_Char = encrypted_Data_Param[i];
        int encrypted_Values = static_cast<int>(current_Char);

        // Using XOR Phenomena to decrypt the data
        int decrypted_Value = encrypted_Values ^ seq_String[i % seq_String.size()];

        decrypted_Data += static_cast<char>(decrypted_Value);
    }
    return decrypted_Data; // Return the decrypted string

}