#include <iostream>
#include <cctype>
#include <cstdio>
#include <cstring>
using namespace std;
 
char output[100] = "(read A var := 5)";
 
/* my version of move ;) */

void move2(int spos, int places)
{
    for(int x = strlen(output); x >=spos; x--)
    {
        output[x+places] = output[x]; /* move character from position x to position x+places */
    }
 
    for(int x = 0; x < places; x++)
        output[x+spos] = ' ' ; /* now we are adding white spaces to the begining */
 
}
 
int main(void)
{
    int i = 0;
    for(i = 0; i < strlen(output); i++)
        cout << output[i];
    cout << endl;
 
    move2(1, 1);  // "( read A var := 5)"  
    for (i = 0; i < strlen(output); i++)
        cout << output[i];
    cout << endl;
	system("pause");
    return 0;
}