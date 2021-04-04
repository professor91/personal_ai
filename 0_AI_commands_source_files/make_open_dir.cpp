#include<iostream>
#include<dir.h>

#define log(x) std:: cout << x
#define read(x) std:: cin >> x

int main()
{
    int choice,check; 
    const char* dir_name; 

    log("1. Create Folder\t2. Open Folder");
    read(choice);

    log("\nEnter directory name: ");
    read(dir_name);
  
    check = mkdir(dir_name,0777); 
  
    // check if directory is created or not 
    if (!check) 
        printf("Directory created\n"); 
    else { 
        printf("Unable to create directory\n"); 
        exit(1); 
    } 

    system("dir"); 
return 0;
}