#include "Header_Files.h"
#include "XOR_Definition.h"
#include "CypherS_Definition.h"
#include "CSX_Definition.h"
#include "SX_Definition.h"
#include "OS_&_Extra_Func.h" // Contains the OS Differentaton and extra codes

// Declaring classes

// Encryption and Decryption
class choice_And_Data_Types
{
private:

    // Declaring data types with pointers in private
    short main_Choice; // To take the main choice of the user in number ==> (Encrypt OR Decrypt the data)
    short choose_Encryption; // To the take the choice of the user about encryptions
    short sub_Choice; // To take the sub choice of the user about the mode of data entry ==> (Manually OR File)
    string filename; // To store the filename in the both the case of encryption and decryption
    string original_String; // To take the data entered by user (Inputted by file OR manually)
    string encrypted_Data; // To store the Cypher
    string decrypted_Data; // To store the decrypted data (Cypher converted into its original data)

public:

    // Declaring and defining default constructor
    choice_And_Data_Types()
    {
        main_Choice = 0;
        choose_Encryption = 0;
        sub_Choice = 0;
        filename = '\0';
        original_String = '\0';
        encrypted_Data = '\0';
        decrypted_Data = '\0';
    }

    // Declaring and defining paramaterized constructor
    choice_And_Data_Types(short main_Choice, short choose_Encryption, short sub_Choice, string filename, string input_Data, string encrypted_Data, string decrypted_Data)
    {
        this->main_Choice = main_Choice;
        this->choose_Encryption = choose_Encryption;
        this->sub_Choice = sub_Choice;
        this->filename = filename;
        this->original_String = input_Data;
        this->encrypted_Data = encrypted_Data;
        this->decrypted_Data = decrypted_Data;
    }

    // Declaring and defining Setters
    void set_main_Choice() // Build OR Decrypt a Cypher
    {
        clear_Screen();
        print_AZAK();
        cout << "1. Build a Cypher" << endl;
        cout << "2. Decrypt a Cypher" << endl;
        cout << "3. Go back" << endl;
        cout << "Choose : ";

        // Taking input using do-while loop
        do
        {
            cin >> main_Choice;

            while (main_Choice != 1 && main_Choice != 2 && main_Choice != 3 && !isalnum(main_Choice))
            {
                clear_Screen();
                print_AZAK(); // AZAK Logo
                cout << "=============" << endl;
                cout << "Invalid Input" << endl;
                cout << "=============" << endl;
                cout << endl;
                cout << "1. Build a Cypher" << endl;
                cout << "2. Decrypt a Cypher" << endl;
                cout << "3. Go back" << endl;
                cout << "Choose : ";
                cin >> main_Choice;
            }

        } while (main_Choice != 1 && main_Choice != 2 && main_Choice != 3 && !isalnum(main_Choice));

    }

    void set_choose_Encryption() // CypherS OR XOR OR CSX
    {

        if (get_main_Choice() == 1)
        {
            clear_Screen();
            print_AZAK(); // AZAK Logo
            cout << "Select the encryption method" << endl;
            cout << "1. CypherS Encryption" << endl;
            cout << "2. XOR Encryption" << endl;
            cout << "3. CSX Encryption" << endl;
            cout << "4. SX Encryption" << endl;
            cout << "5. Go back" << endl;
            cout << "Choose  : ";

            // Taking input using do-while loop
            do
            {
                cin >> choose_Encryption;

                while (choose_Encryption == 1 && choose_Encryption == 2 && choose_Encryption == 3 && choose_Encryption == 4 && choose_Encryption == 5 && 
                       !isalnum(choose_Encryption))
                {
                    clear_Screen();
                    print_AZAK(); // AZAK Logo
                    cout << "=============" << endl;
                    cout << "Invalid Input" << endl;
                    cout << "=============" << endl;
                    cout << endl;
                    cout << "Select the encryption method" << endl;
                    cout << "1. CypherS Encryption" << endl;
                    cout << "2. XOR Encryption" << endl;
                    cout << "3. CSX Encryption" << endl;
                    cout << "4. SX Encryption" << endl;
                    cout << "5. Go back" << endl;
                    cout << "Enter your choice : ";
                    cin >> choose_Encryption;
                }


            } while (choose_Encryption == 1 && choose_Encryption == 2 && choose_Encryption == 3 && choose_Encryption == 4 && choose_Encryption == 5 && 
                    !isalnum(choose_Encryption));

        }
        else if (get_main_Choice() == 2)
        {

            clear_Screen();
            print_AZAK(); // AZAK Logo
            cout << "Select the decryption method" << endl;
            cout << "1. CypherS Decryption" << endl;
            cout << "2. XOR Decryption" << endl;
            cout << "3. CSX Decryption" << endl;
            cout << "4. SX Decryption" << endl;
            cout << "5. Go back" << endl;
            cout << "Enter your choice  : ";

            // Taking input using do-while loop
            do
            {
                cin >> choose_Encryption;

                while (choose_Encryption == 1 && choose_Encryption == 2 && choose_Encryption == 3 && choose_Encryption == 4 && choose_Encryption == 5 && 
                       !isalnum(choose_Encryption))
                {
                    clear_Screen();
                    print_AZAK(); // AZAK Logo
                    cout << "=============" << endl;
                    cout << "Invalid Input" << endl;
                    cout << "=============" << endl;
                    cout << endl;
                    cout << "Select the decryption method" << endl;
                    cout << "1. CypherS Decryption" << endl;
                    cout << "2. XOR Decryption" << endl;
                    cout << "3. CSX Decryption" << endl;
                    cout << "4. SX Decryption" << endl;
                    cout << "5. Go back" << endl;
                    cout << "Enter your choice : ";
                    cin >> choose_Encryption;
                }


            } while (choose_Encryption == 1 && choose_Encryption == 2 && choose_Encryption == 3 && choose_Encryption == 4 && choose_Encryption == 5 && 
                     !isalnum(choose_Encryption));

        }

    }
 
    void set_Data_Manually() // Takes the data manually and sends to the member variables in private
    {
        if (get_main_Choice() == 1) // Executes when main_Choice == 1 (Build a Cypher)
        {
            // Clearing the buffer
            cin.clear(), cin.ignore();

            cout << "Enter a string to encrypt : ";
            getline(cin, original_String);
        }
        else if (get_main_Choice() == 2) // Executes when main_Choice == 2 (Decrypt a Cypher)
        {
            // Clearing the buffer
            cin.clear(), cin.ignore();

            cout << "Enter a Cypher : ";
            getline(cin, original_String);
        }


    }

    void set_encrypted_Data()
    {
        if (choose_Encryption == 1) // Executes when choose_Encryption = 1 (CypherS Encryption)
        {
            // Calling encrypt_X_CypherS() function
            encrypted_Data = encrypt_X_CypherS(original_String);
        }
        else if (choose_Encryption == 2) // Executes when choose_Encryption = 2 (XOR Encryption)
        {
            // Calling encrypt_X_XOR() function
            encrypted_Data = encrypt_X_XOR(original_String);
        }
        else if (choose_Encryption == 3) // Executes when choose_Encryption = 3 (CSX Encryption)
        {
            // Calling encrypt_X_CSX() function
            encrypted_Data = encrypt_X_CSX(original_String);
        }
        else if (choose_Encryption == 4) // Executes when choose_Encryption = 4 (XCS Encryption)
        {
            // Calling encrypt_X_XCS() function
            encrypted_Data = encrypt_X_SX(original_String);
        }
         
    }

    void set_decrypted_Data()
    {
        if (choose_Encryption == 1) // Executes when choose_Encryption = 1 (CypherS Decryption)
        {
            // Calling decrypt_X_CypherS() function
            decrypted_Data = decrypt_X_CypherS(original_String);
        }
        else if (choose_Encryption == 2) // Executes when choose_Encryption = 2 (XOR Decryption)
        {
            // Calling decrypt_X_XOR() function
            decrypted_Data = decrypt_X_XOR(original_String);
        }
        else if (choose_Encryption == 3) // Executes when choose_Encryption = 3 (CSX Decryption)
        {
            // Calling decrypt_X_CSX() function
            decrypted_Data = decrypt_X_CSX(original_String);
        }
        else if (choose_Encryption == 4) // Executes when choose_Encryption = 4 (XCS Decryption)
        {
            // Calling decrypt_X_XCS() function
            decrypted_Data = decrypt_X_SX(original_String);
        }
        
    }


    // Declaring Getters
    short get_main_Choice()
    {
        return main_Choice;
    }

    short get_choose_Encryption()
    {
        return choose_Encryption;
    }

    string get_filename()
    {
        return filename;
    }

    string get_original_String()
    {
        return original_String;
    }

    string get_encrypted_data()
    {
        return encrypted_Data;
    }

    string get_decrypted_Data()
    {
        return decrypted_Data;
    }


};