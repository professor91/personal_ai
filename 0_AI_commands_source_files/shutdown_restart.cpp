#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

void shutdown()
{
    std:: string shut = "C:\\Windows\\System32\\shutdown /s /t ";
    std:: string sec = 20;

    log("How many seconds? ");
    read(sec);
    shut += sec;
    const char* command = shut.c_str();
    system(command);
}

void restart()
{
    std::string upagain = "C:\\Windows\\System32\\shutdown /r /t ";
    std:: string sec = "20";

    log("How many seconds? ");
    read(sec);
    upagain += sec;
    const char* command = upagain.c_str();
    system(command);
}

int main()
{
    int choice;

    log("1. Shutdown\n2. Restart");
    read(choice);

    switch(choice)
    {
        case 1  :   shutdown();
                    break;

        case 2  :   restart();
                    break;

        default :   log("Wrong choice!");
    }
    
std:: cin.get();
return 0;
}