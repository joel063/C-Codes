#include <iostream>
#include <string>
using namespace std;
int main()
{
    string words {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key   {"defghijklmnopqrstuvwxyzabcDEFGHIJKLMNOPQRSTUVWXYZABC"};
    string message;
    cout<<"Enter the secret message:";
    getline(cin,message);
    string encrypted_message;
    if (message.size()> 0)
    {
     for(char a:message)
     {
        size_t got {words.find(a)};
        if(got != string::npos)
        {
            encrypted_message+=key[got];
        }
        else
        {
            encrypted_message+=a;
        }
     }
     cout<<"Encrypted message:"<<encrypted_message;
    }
    else
    cout<<"Please enter a message."<<endl;

   
    string decrypted_message;

    if(encrypted_message.size()>0)
    {
     for(char a :encrypted_message)
     {
        size_t got {key.find(a)};
        if(got != string::npos)
        {
            decrypted_message+=words[got];
        }
        else
        {
            decrypted_message+=a;
        }
     }

     cout<<endl<<"The decrypted message is:"<<decrypted_message;
    }
   




    





    return 0;
}