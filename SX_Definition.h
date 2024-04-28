#include "Header_Files.h"

// Defining the functions to encrypt and decrypt the data using SX Encryption
// Encryption
string encrypt_X_SX(string& input_Data_Param)
{
    for (int i = 0; i < input_Data_Param.length(); i++)
    {
        input_Data_Param[i] = input_Data_Param[i] + 1; // Shifts each character forward by 1
    }

    string encrypted_Data; // To store the encrypted data
    // Calling encrypt_X_XOR
    encrypted_Data = encrypt_X_XOR(input_Data_Param);

    return encrypted_Data;
}

// Decryption
string decrypt_X_SX(string& input_Data_Param)
{
	string decrypted_Data; // To store the decrypted data
	// Calling decrypt_X_XOR
	decrypted_Data = decrypt_X_XOR(input_Data_Param);


    for (int i = 0; i < decrypted_Data.length(); i++)
    {
        decrypted_Data[i] = decrypted_Data[i] - 1; // Shifts each character forward by 1
    }

	return decrypted_Data;
}