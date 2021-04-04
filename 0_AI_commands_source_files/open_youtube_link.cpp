#include<iostream>
#include<ctime>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

int main()
{
    // const char* youtube_general_url = "start + https://www.youtube.com/results?search_query=";
    const char* query_0 = "start https://www.youtube.com/watch?v=SlPhMPnQ58k&list=PL4o29bINVT4EG_y-k5jGoOu3-Am8Nvi10";
    const char* query_1 = "start https://www.youtube.com/watch?v=JGwWNGJdvx8&list=PLMC9KNkIncKtPzgY-5rmhvj7fax8fdxoj";
    const char* query_2 = "start https://www.youtube.com/watch?v=Ps4aVpIESkc&list=PL9bw4S5ePsEEqCMJSiYZ-KTtEjzVy0YvK";
    const char* query_3 = "start https://www.youtube.com/watch?v=_Bjf-iExroI&list=PLDIoUOhQQPlXzhp-83rECoLaV6BwFtNC4";
    const char* query_4 = "start https://www.youtube.com/watch?v=kJQP7kiw5Fk&list=PL15B1E77BB5708555";

    const char* ptr[5];

    ptr[0] = query_0;
    ptr[1] = query_1;
    ptr[2] = query_2;
    ptr[3] = query_3;
    ptr[4] = query_4;

    srand(time(NULL));
    int randon_index = rand() % 5;
    const char* search_query = ptr[randon_index];

    system(search_query);
return 0;
}