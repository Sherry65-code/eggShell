#include<iostream>
#include<unistd.h>
#include <string>  
#include<stdio.h>
using namespace std;

#define max 8 
string strings[max]; // define max string  

int len(string str)  
{  
    int length = 0;  
    for (int i = 0; str[i] != '\0'; i++)  
    {  
        length++;  
          
    }  
    return length;     
}  
  

void split (string str, char seperator)  
{  
    int currIndex = 0, i = 0;  
    int startIndex = 0, endIndex = 0;  
    while (i <= len(str))  
    {  
        if (str[i] == seperator || i == len(str))  
        {  
            endIndex = i;  
            string subStr = "";  
            subStr.append(str, startIndex, endIndex - startIndex);  
            strings[currIndex] = subStr;  
            currIndex += 1;  
            startIndex = endIndex + 1;  
        }  
        i++;  
        }     
}  
  

int main()
{
    cout << "\033[2J\033[1;1H";
    string query, query_split;
    cout << "EGG 0.0.0.0.1 by Parambir Singh" << endl;
    while (true)
    {
        cout << endl;
        cout << "EGG[";
        cout << get_current_dir_name();
        cout << "]>>";
        cin >> query;
        split(query, ' ');
        if (strings[0] == "cd")
        {
            break;
        }
        else if (strings[0] == "bye")
        {
            break;
        }
        else if (strings[0] == "say")
        {
            int xabc = 0;
            string ansn = "";
            try
            {
                for (;xabc <= 100;)
                {
                xabc+=1;
                ansn += strings[xabc] + " ";
                }
            }
            catch(const std::exception& e)
            {
                cout << "";
            }
            cout << endl << ansn;
        }
        
    }
}