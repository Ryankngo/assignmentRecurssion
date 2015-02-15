//
//  4.1.cpp
//  AssignmentRecurrsion
//
//  Created by Ryan Ngo on 2/7/15.
//
//

#include <iostream>

using namespace std;

void reverseWithinBounds(char array[],int,int);
void reverseCstring( char string []);

int main()
{
    char a[6] {'A', 'B', 'C', 'D', 'E', '\0'};
    cout << a;
    reverseWithinBounds(a, 1, 4);
    cout <<a<<endl;
    
    char p2[] = "String";
    
    cout <<p2<<endl;
    
    reverseCstring(p2);
    
    cout <<p2<<endl;
    
    return 0;
}

void reverseWithinBounds (char array[], int lBound, int rBound)
{
    if(lBound>= rBound)
    {
        return;
    }
    else
    {
        char temp;
        
        temp = array[lBound];
        array [lBound] = array[rBound];
        array[rBound]= temp;
        
        reverseWithinBounds( array, lBound +1, rBound -1);
        
    }
    
    
    
}

void reverseCstring (char string[])
{
    reverseWithinBounds(string, 0, strlen(string+1));
    
}
/*
 ABCDEAEDCB
 String
 gnirtS
 Program ended with exit code: 0
*/