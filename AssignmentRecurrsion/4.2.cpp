//
//  4.2.cpp
//  AssignmentRecurrsion
//
//  Created by Ryan Ngo on 2/7/15.
//
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cctype>

using namespace std;

bool  isPal(char array[],int,int);


int main()

{
    char s[] = "quit";
    char in[256];
    char *pali;
    do {
        

    
        cout << "Enter a string:";
        cin.get (in,256);
        getchar();
        pali = new char[strlen(in)+1];
        strcpy(pali,in);
        
        if  (strcmp (pali,s)==0)
        {
            return 0;
        }
        
        if (isPal(pali,0,strlen(pali)-1))
            {
                cout<< pali << " is a palindrome."<<endl;
            }
        else
        {
            cout<< pali << " is not a palindrome."<<endl;
        }
        
        
        

        
    
    
    }while (strcmp (pali,s)!=0);
        
}

bool isPal(char array[] , int first, int last)
{
    if (first >= last)
        
        return true;
    
    if (ispunct(array[first])  ||  isspace(array[first]))
         return isPal(array, ++first, last);
    
    if (ispunct(array[last])  ||  isspace(array[last]))
        return isPal(array, first, --last);
   
    if (toupper(array[first]) != toupper(array[last]))
        return false;
    return isPal(array, ++first, --last);
 
}

/*
 Enter a string:  Able was I, ere I saw Elba
 Able was I, ere I saw Elba is a palindrome.
 Enter a string:quit
 Program ended with exit code: 0
 */

