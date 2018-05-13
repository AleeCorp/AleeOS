/*************************************************************************
*
*   AleeOS: An operating system that's bootable
*   Copyright (C) 2018 AleeCorp
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*************************************************************************/
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