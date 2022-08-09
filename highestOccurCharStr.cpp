#include<iostream>
#include<cstring>
using namespace std;
char highest(char inp[]){
    int c[256] = {0};
    int len = strlen(inp);
    for (int i=0; inp[i]!='\0'; i++){
        c[inp[i]]++;
    }
    int m = -1;
    char result;
    for (int i = 0;inp[i]!='\0'; i++)
   {
        if (m< c[inp[i]])
        {
            m= c[inp[i]];
            result = inp[i];
        }
    }

    return result;
}
int main(){
    char inp[100];
    cin.getline(inp,100);
    cout<<highest(inp)<<endl;
}

