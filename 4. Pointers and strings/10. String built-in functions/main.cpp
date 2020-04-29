#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

void strncpyExample();
void strcatExample();
void strcmpExample();
void strtokExample();
void strlenExample();

int main()
{
    cout<<"******* USING STRCPY() FUNCTION ******* ---> /copies s2 to s1"<<endl;
    strncpyExample();
    cout<<"***************************************"<<endl;
    cout<<endl;


    cout<<"******* USING STRCAT() FUNCTION ******* ---> /adds s2 to s1"<<endl;
    strcatExample();
    cout<<"***************************************"<<endl;
    cout<<endl;

    cout<<"******* USING STRCMP() FUNCTION ******* ---> /compares s2 and s1"<<endl;
    strcmpExample();
    cout<<"***************************************"<<endl;
    cout<<endl;

    cout<<"******* USING STRTOK() FUNCTION ******* ---> /splits up lexemes s2 and s1"<<endl;
    strtokExample();
    cout<<"***************************************"<<endl;
    cout<<endl;

    cout<<"******* USING STRLEN() FUNCTION ******* ---> /defines length of a string"<<endl;
    strlenExample();
    cout<<"***************************************"<<endl;
    cout<<endl;

    return 0;
}

void strncpyExample() //Copies s2 to s1 and returns s1
{
    char x[] = "Happy Birthday to You!";
    char y[25], z[15];

    cout<<"String in array x: "<<x
        <<"\nString in array y: "<<strcpy(y, x)<<'\n';
    strncpy(z, x, 14), //The last argument is a number of limited characters in string.
    z[14] = '\0';
    cout<<"String in array z: "<<z<<endl;
}

void strcatExample() //Adds s2 to s1
{
    char s1[20] = "Happy";
    char s2[] = "New Year ";
    char s3[40] = "";

    cout<<"s1 = "<<s1<<"\ns2 = "<<s2;
    cout<<"\nstrcat(s1, s2) = "<<strcat(s1, s2);
    cout<<"\nstrncat(s1, s2, 6) = "<<strncat(s1, s2, 6); // Copies only six characters from s2 to s1
    cout<<"\nstrcat(s3, s1) = "<<strcat(s3, s1)<<endl;
}

void strcmpExample() //Compares s2 and s1
{
    char *s1 = "Happy New Year";
    char *s2 = "Happy New Year";
    char *s3 = "Happy Holidays";

    cout<<"s1 = "<<s1<<"\ns2 = "<<s2
        <<"\ns3 = "<<s3<<"\n\nstrcmp(s1, s2) = "
        <<setw(2)<<strcmp(s1, s2)
        <<strcmp(s1, s2)<<"\nstrcmp(s3, s1) = "
        <<setw(2)<<strcmp(s3, s1);

    cout<<"\n\nstrncmp(s1, s3, 6) = "<<setw(2)
        <<strncmp(s1, s3, 6)<<"\nstrncmp(s1, s3, 7) = "
        <<setw(2)<<strncmp(s1, s3, 7)
        <<"\nstrncmp(s3, s1 7) = "
        <<setw(2)<<strncmp(s3, s1, 7)<<endl;
}

void strtokExample() //Split up a string on lexemes
{
    char string1[] = "This sentance consists five lexemes";
    char *tokenPtr;

    cout<<"String spits up on lexemes:\n"<<string1
        <<"\n\nLexemes:\n";

    tokenPtr = strtok(string1, " ");

    while(tokenPtr != NULL){
        cout<<tokenPtr<<'\n';
        tokenPtr = strtok(NULL, " ");
    }
}

void strlenExample() //Defines length of a string.
{
    char *string1 = "abcdefghijklmnopqrstuvwxyz";
    char *string2 = "four";
    char *string3 = "Boston";

    cout<<"Length \""<<string1
        <<"\" equal "<<strlen(string1)
        <<"\nLength \""<<string2
        <<"\" equal "<<strlen(string2)
        <<"\nLength \""<<string3
        <<"\" equal "<<strlen(string3)<<endl;
}
