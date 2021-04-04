#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

void brave_bot()    {   system("open_youtube_link.exe");    }

void google_bot()   {   system("search_on_google.exe");     }

int main()
{
    int choice;
    read(choice);

    switch(choice)
    {
        case 1 :    brave_bot();
                    break;
        
        case 2  :   google_bot();
                    break;
    }
return 0;
}