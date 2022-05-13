
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[]){
    char b[10];
    string question1 = "I owe you $1000\n";
    string question2 = "I don't know you\n";

    cout << "enter a name" <<endl;
    gets(b);
    if(strstr(b, "joker"))
    {
      cout <<question1<<endl;
    }
    else
    {
      cout <<question2<<endl;
    }

    printf("%p\n", (void * )b);
    printf("%p\n",question2);


    return 0;

}