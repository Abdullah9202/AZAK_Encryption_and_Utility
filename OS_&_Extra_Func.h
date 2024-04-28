#include "Header_Files.h"

// Display AZAK
void print_AZAK()
{
    cout << "\033[1;34m";
    cout << "     AA    ZZZZZZZ   AA    KK  KK\n";
    cout << "   AA  AA      ZZ  AA  AA  KK KK\n";
    cout << "  AAA  AAA    ZZ  AAA  AAA KKK\n";
    cout << "  AAAAAAAA   ZZ   AAAAAAAA KK KK\n";
    cout << "  AAA  AAA  ZZ    AAA  AAA KK  KK\n";
    cout << "  AAA  AAA ZZZZZZ AAA  AAA KK   KK";
    cout << "\033[0m\n";
}


// Differentiating the OS
#ifdef _WIN32
    #define OS_WINDOWS
#elif __linux__
    #define OS_LINUX
#elif __APPLE__
    #define OS_MAC
#endif

// Clearing the Terminals
#ifdef _WIN32
    #define CLEAR_SCREEN "cls"
#elif defined(__linux__) || defined(__unix__) || defined(__APPLE__)
    #define CLEAR_SCREEN "clear"
#endif

// Defining the function to clear the screen
void clear_Screen()
{
    system(CLEAR_SCREEN); // Executes the screen clearing commands according to the OS
}