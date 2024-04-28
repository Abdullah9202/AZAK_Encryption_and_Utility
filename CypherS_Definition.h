#include "Header_Files.h"

// Defining the functions to encrypt and decrypt the data using CypherS Encryption
// Encryption
string encrypt_Algo(const string& input_Data_Param)
{
	string encrypted_String = input_Data_Param;
	int size = encrypted_String.length(); // Length of input_Data_Param string

	if (size % 2 == 0) // Executes if the word have even number of characters
	{
		// Applying even number formula to encrypt
		for (char& current_Char : encrypted_String)
		{
			current_Char += 2; // Shifting each char by two positions
		}
	}
	else
	{
		// Appying odd number formula to encrypt
		for (char& current_Char : encrypted_String)
		{
			current_Char -= 1; // Shifting each char back by one position
		}
	}

	return encrypted_String; // Return the encrypted string
}


// Decryption
string decrypt_Algo(const string& encrypted_Data_Param)
{
	string decrypted_String = encrypted_Data_Param;
	int size = decrypted_String.length(); // Length of encrypted string

	if (size % 2 == 0) // Executes if the word have even number of characters
	{
		// Applying even number formula to decrypt
		for (char& current_Char : decrypted_String)
		{
			current_Char -= 2; // Shifting each character back by two positions
		}
	}
	else
	{
		// Applying odd number formula to decrypt
		for (char& current_Char : decrypted_String)
		{
			current_Char += 1; // Shifting each char by one position
		}
	}

	return decrypted_String; // Return the decrypted string
}

// Creating a function to Tokenize the words
vector<string> tokenize_Word(const string& input_Data_Param)
{
	vector<string> words;
	string delimeter = " ";
	size_t start_Position = 0;
	size_t end_Position = input_Data_Param.find(delimeter);

	// Using while loop for tokenizing
	while (end_Position != string::npos)
	{
		string word = input_Data_Param.substr(start_Position, end_Position - start_Position);
		words.push_back(word);

		start_Position = end_Position + delimeter.length();
		end_Position = input_Data_Param.find(delimeter, start_Position);
	}

	string last_Word = input_Data_Param.substr(start_Position, end_Position);
	words.push_back(last_Word);

	return words;
}

// Creating final functions
// Encryption
string encrypt_X_CypherS(const string& input_Data_Param)
{
	vector<string> words = tokenize_Word(input_Data_Param); // Creating a vector string to store tokenize words
	string final_Encrypted_Data; // To store final encrypted data

	// Using range based for loop to copy the content of words into word(Function paramater)
	for (const string& word : words)
	{
		// Calling the encrypt_Algo and storing in processed_Word variable
		string processed_Word = encrypt_Algo(word);
		
		final_Encrypted_Data += processed_Word + " "; // Passing the processed word into final_Encrypted_Data string
	}

	return final_Encrypted_Data; // Returns the encrypted data
}

// Decryption
string decrypt_X_CypherS(const string& input_Data_Param)
{
	vector<string> words = tokenize_Word(input_Data_Param); // Creating a vector string to store tokenize words
	string final_Decrypted_Data; // To store final decrypted data

	// Using range based for loop to copy the content of words into word(Function paramater)
	for (const string& word : words)
	{
		// Calling the decrypt_Algo and storing in processed_Word variable
		string processed_Word = decrypt_Algo(word);

		final_Decrypted_Data += processed_Word + " "; // Passing the processed word into final_Decrypted_Data string
	}

	return final_Decrypted_Data; // Returns the decrypted data
}