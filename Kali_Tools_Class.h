#include "Header_Files.h"

// Defining a class for Kali Linux Tools Automation

class Tools
{
private:
    /* data */
public:
    // Declaring and defining a function to print tools
    void print_Tools()
    {
        cout << "1. Wifite" << endl;
        cout << "2. Aircrack-ng" << endl;
        cout << "3. Wireshark" << endl;
        cout << "4. Angry IP Scanner" << endl;
        cout << "5. LOIC" << endl;
        cout << "6. Nmap" << endl;
        cout << "7. MSF Console" << endl;
        cout << "8. John the Ripper" << endl;
        cout << "9. Go back" << endl;
    }

    // Declaring and defining a bool function to check the presence of tools
    static bool is_Tool_Installed(const string& tool_Param)
    {
        string command = "which " + tool_Param;
        FILE* pipe = popen(command.c_str(), "r");

        if (!pipe) // Executes when tool is not installed
        {
            return false;
        }
        
        pclose(pipe);
        return true;
        
    }

    // Declaring and defining a function open_Tool to launch the tools
    static void open_Tool(const std::string& toolName) 
    {
        std::string command = "gnome-terminal -x sh -c \"" + toolName + "; exec bash\"";
        system(command.c_str());
    }

};
