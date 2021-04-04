#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

void open(const char* application)
{
    system(application);
}

void notepad(void)  {   open("notepad.exe");    }

int main()
{
    std:: string directory = "";
    std:: string app_name;

    // log("Enter the application name: ");
    // read(app_name);

    // directory += app_name;

    open(directory.c_str());
    
return 0;
}