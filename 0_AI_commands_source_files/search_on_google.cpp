#include<iostream>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

int main()
{
   std:: string general_google_url = "start https://www.google.com/search?q="; 
   std:: string user_query;

    log("What you want me to search sir? ");
    read(user_query);

    std:: string query = general_google_url + user_query;
    //changing 'query' from std:: string type to const char* type
    const char* command = query.c_str(); 

    system(command);

return 0;
}