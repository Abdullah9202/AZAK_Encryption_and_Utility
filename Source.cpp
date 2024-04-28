#include "Header_Files.h"
#include "Encry_Decry_Class.h"
#include "Kali_Tools_Class.h"
using namespace std;

int main(int argc, char const* argv[])
{
    Full_GoBack: // For goto Call
    clear_Screen(); // Clearing the terminal

    short time = 10; // To store the delay seconds

    print_AZAK(); // AZAK Logo


    short Encry_Decry_OR_Kali_Tools; // To take the head choice form the user ==> (Encryption, Decryption OR Kali Linux Tools)

    cout << "1. Encryption and Decryption" << endl;
    cout << "2. Kali Tools" << endl;
    cout << "3. Exit" << endl;

    // Taking Input using do-while loop
    cout << "Choose : ";
    do
    {
        cin >> Encry_Decry_OR_Kali_Tools;

        while (Encry_Decry_OR_Kali_Tools != 1 && Encry_Decry_OR_Kali_Tools != 2 && Encry_Decry_OR_Kali_Tools != 3 && !isalnum(Encry_Decry_OR_Kali_Tools))
        {
            clear_Screen();
            print_AZAK(); // AZAK Logo
            cout << "Invalid choice!" << endl;
            cout << "1. Encryption and Decryption" << endl;
            cout << "2. Kali Tools" << endl;
            cout << "3. Exit" << endl;
            cout << "Choose : ";
            cin >> Encry_Decry_OR_Kali_Tools;
        }

    } while (Encry_Decry_OR_Kali_Tools != 1 && Encry_Decry_OR_Kali_Tools != 2 && Encry_Decry_OR_Kali_Tools != 3 && !isalnum(Encry_Decry_OR_Kali_Tools));

    while (true) {
        // Using switch statements 
        switch (Encry_Decry_OR_Kali_Tools)
        {
        case 1:
        {
            // Creating Object
            choice_And_Data_Types call1; // Object

            call1.set_main_Choice(); // Build OR Decrypt a Cypher

            switch (call1.get_main_Choice())
            {
            case 1: // Build a Cypher (Encryption) 
            {
            Go_Back_Encry: // For goto call
                call1.set_choose_Encryption(); // CypherS Encryption OR XOR Encryption OR CSX Encryption OR SX Encryption

                switch (call1.get_choose_Encryption())
                {
                case 1: // CypherS Encryption
                {
                    call1.set_Data_Manually();
                    call1.set_encrypted_Data();
                    cout << "===================================" << endl;
                    cout << "Encrypted data (CypherS Encryption): " << call1.get_encrypted_data() << endl;
                    cout << "===================================" << endl;
                    cout << "Copy the encrypted data, Resetting in " << time << " seconds" << endl;
                    sleep_for(seconds(time)); // Delay
                    goto Go_Back_Encry;                 
                }
                case 2: // XOR Encryption
                {
                    call1.set_Data_Manually();
                    call1.set_encrypted_Data();
                    cout << "================================" << endl;
                    cout << "Encrypted data (XOR Encryption): " << call1.get_encrypted_data() << endl;
                    cout << "================================" << endl;
                    cout << "Copy the encrypted data, Resetting in " << time << " seconds" << endl;
                    sleep_for(seconds(time)); // Delay
                    goto Go_Back_Encry;
                }
                case 3: // CSX Encryption
                {
                    call1.set_Data_Manually();
                    call1.set_encrypted_Data();
                    cout << "================================" << endl;
                    cout << "Encrypted data (CSX Encryption): " << call1.get_encrypted_data() << endl;
                    cout << "================================" << endl;
                    cout << "Copy the encrypted data, Resetting in " << time << " seconds" << endl;
                    sleep_for(seconds(time)); // Delay
                    goto Go_Back_Encry;
                }
                case 4: // SX Encryption
                {
                    call1.set_Data_Manually();
                    call1.set_encrypted_Data();
                    cout << "===============================" << endl;
                    cout << "Encrypted data (SX Encryption): " << call1.get_encrypted_data() << endl; 
                    cout << "===============================" << endl;
                    cout << "Copy the encrypted data, Resetting in " << time << " seconds" << endl;
                    sleep_for(seconds(time)); // Delay
                    goto Go_Back_Encry;
                }
                case 5: // Go back
                {
                    continue;
                }
                default:
                {
                    cerr << "Invalid choice for encryption method." << endl;
                    break;
                }
            }
            break;
            }
            case 2: // Decrypt a Cypher
            {
            Go_Back_Decry: // For goto call
                call1.set_choose_Encryption(); // CypherS Decryption OR XOR Decryption

                switch (call1.get_choose_Encryption())
                {
                case 1: // CypherS Decryption
                {
                    call1.set_Data_Manually();
                    call1.set_decrypted_Data();
                    cout << "====================================" << endl;
                    cout << "Decrypted data (CypherS Decryption): " << call1.get_decrypted_Data() << endl;
                    cout << "====================================" << endl;
                    cout << "Copy the decrypted data, Resetting in 10 seconds" << endl;
                    sleep_for(seconds(10)); // 10 sec delay
                    goto Go_Back_Decry;
                }
                case 2: // XOR Decryption
                {
                    call1.set_Data_Manually();
                    call1.set_decrypted_Data();
                    cout << "=================================" << endl;
                    cout << "Decrypted data (XOR Decryption): " << call1.get_decrypted_Data() << endl;
                    cout << "=================================" << endl;
                    cout << "Copy the decrypted data, Resetting in 10 seconds" << endl;
                    sleep_for(seconds(10)); // 10 sec delay
                    goto Go_Back_Decry;
                }
                case 3: // CSX Decryption
                {
                    call1.set_Data_Manually();
                    call1.set_decrypted_Data();
                    cout << "===============================" << endl;
                    cout << "Decrypted data (CSX Decryption): " << call1.get_decrypted_Data() << endl;
                    cout << "=================================" << endl;
                    cout << "Copy the decrypted data, Resetting in 10 seconds" << endl;
                    sleep_for(seconds(10)); // 10 sec delay
                    goto Go_Back_Decry;
                }
                case 4: // XCS Decryption
                {
                    call1.set_Data_Manually();
                    call1.set_decrypted_Data();
                    cout << "================================" << endl;
                    cout << "Decrypted data (SX Decryption): " << call1.get_decrypted_Data() << endl;
                    cout << "================================" << endl;
                    cout << "Copy the decrypted data, Resetting in 10 seconds" << endl;
                    sleep_for(seconds(10)); // 10 sec delay
                    goto Go_Back_Decry;
                }
                case 5: // Go back
                {
                    continue;
                }
                default:
                {
                    cerr << "Invalid choice for decryption method." << endl;
                    break;
                }
            }
            break;
            }
            case 3: // goto call because continue; is not working here
            {
                goto Full_GoBack; // ==> Pointing to Line number 10
            }
            default:
            {
                cerr << "Invalid choice for main operation." << endl;
                break;
            }

        }
        break;
        }
        case 2: // Kali Linux Tools
        {
            #ifdef _WIN32 // Executes when launched on Windows OS 
            {
                clear_Screen();
                cout << "Kali Tools cannot be lauched on Windows OS.\n";
                cout << "Switch to Kali Linux" << endl;
                sleep_for(seconds(3)); // 3 sec delay
                goto Full_GoBack;

            }
            #elif __linux__ // Executes when launched on Kali Linux
            {
                while (true)
                {
                    clear_Screen();
                    
                    // Creating an object of Tools class
                    Tools obj1_Tools;
                    int tool_Choice; // To take the user choice to open the tools
                    string tool_Name; // To store the selected tool name
                    
                    // Printing AZAK Logo
                    print_AZAK();
                    // Call print_Tools() function
                    obj1_Tools.print_Tools();

                    // Taking input from the user using do-while loop
                    cout << "Enter your choice : ";
                    do
                    {
                        cin >> tool_Choice;

                        while (tool_Choice != 1 && tool_Choice != 2 && tool_Choice!= 3 && tool_Choice != 4 && tool_Choice != 5 && tool_Choice != 6 && tool_Choice != 7
                             && tool_Choice != 8 && tool_Choice != 9 && !isalnum(tool_Choice))
                        {
                            cout << "==============" << endl;
                            cout << "Invalid Input!" << endl;
                            cout << "==============" << endl;
                            cout << "Enter your choice : ";
                            cin >> tool_Choice;
                        }
                        
                    } while (tool_Choice != 1 && tool_Choice != 2 && tool_Choice!= 3 && tool_Choice != 4 && tool_Choice != 5 && tool_Choice != 6 && tool_Choice != 7
                             && tool_Choice != 8 && tool_Choice != 9 && !isalnum(tool_Choice));

                    // Using switch cases
                    switch (tool_Choice)
                    {
                    case 1:
                        tool_Name = "sudo wifite";
                        break;
                    
                    case 2:
                        tool_Name = "sudo aircrack-ng";
                        break;

                    case 3:
                        tool_Name = "sudo wireshark";
                        break;

                    case 4:
                        tool_Name = "sudo angryip";
                        break;

                    case 5:
                        tool_Name = "sudo loic";
                        break;

                    case 6:
                        tool_Name = "sudo nmap";
                        break;

                    case 7:
                        tool_Name = "sudo msfconsole";
                        break;

                    case 8:
                        tool_Name = "sudo john";
                        break;

                    case 9:
                        goto Full_GoBack;

                    default:
                        break;
                    }  

                    // Opening the tool if available
                    if (Tools::is_Tool_Installed(tool_Name))
                    {
                        // Calling open_Tool() function
                        Tools::open_Tool(tool_Name);
                    }
                    else
                    {
                        cout << tool_Name << " is not instlled on your system. Please install it" << endl;
                    }
                    
                }
                


            }
            #elif __APPLE__ // Executes when launched on MAC OS
            {
                clear_Screen();
                cout << "Kali Tools cannot be launched on MAC OS\n";
                cout << "Switch to Kali Linux" << endl;
                sleep_for(seconds(3)); // 3 sec delay
                goto Full_GoBack;
            }
            #endif // End
                
            break;
        }

        case 3:
        {
            cout << "Exit..." << endl;
            exit(0);
            break;
        }

        default:
            cerr << "Couldn't get that" << endl;
            return -1;
        }

        exit(0); // To exit the while loop
    }

    return 0;
}
