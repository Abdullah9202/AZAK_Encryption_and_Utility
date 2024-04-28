#include "Header_Files.h"

// Defining the functions to encrypt and decrypt the data using CSX Encryption
// Encryption
string encrypt_X_CSX(const string& input_Data_Param)
{
	string encrypted_Data; // To store the encrypted data
	// Calling encrypt_X_CypherS into encrypt_X_XOR to encrypt data
	// First data is encrypted by CypherS and then XOR
	encrypted_Data = encrypt_X_XOR(encrypt_X_CypherS(input_Data_Param));

	return encrypted_Data;
}

// Decryption
string decrypt_X_CSX(const string& input_Data_Param)
{
	string decrypted_Data; // To store the decrypted data
	// Calling decrypt_X_XOR into decrypt_X_CypherS to decrypt data
	// First data is decrypted by XOR and then CypherS
	decrypted_Data = decrypt_X_CypherS(decrypt_X_XOR(input_Data_Param));

	return decrypted_Data;
}