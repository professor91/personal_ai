#include<iostream>
#include<fstream>

#include<system_error>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

int main()
{
    std:: ofstream fout("");
    if(!fout)
    {
        log("\nError");
    }

    fout << "File made successfully.";
    fout.close();
    if(fout.bad())
    {
        log("\nout error");
    }

return 0;
}