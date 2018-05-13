#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
kmain ()
{

    clearScreen();
    print("Welcome to AleeOS 1.0 Pre Alpha!\nTo get started type \'help\'.\n");
       while (1)
       {
                print("\nAleeOS> \n");
                
                string ch = readStr();
                if(strEql(ch,"help"))
                {
                        print("\nAleeOS Commands\n=================\nhelp\nping\ncmd\ncls/clear\nversion\n");
                }
                else if(strEql(ch,"cmd"))
                {
                        print("\nYou are already in cmd\n");
                }
                else if(strEql(ch,"clear"))
                {
                        clearScreen();
                }
                else if(strEql(ch,"cls"))
                {
                        clearScreen();
                } 
                else if(strEql(ch,"version"))
                {
                        print("\nAleeOS Version: 1.0 \nKernel Version: 0.1\n");
                }               
                else if(strEql(ch,"ping"))
                {
                        print("\nPONG! Why does this command exist...\n");
                }
                
                else
                {
                        print("\nBad command!\n");
                }
                
                print("\n");     
       }
}