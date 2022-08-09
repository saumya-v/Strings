#include<iostream>
using namespace std;
void dup(char str[]){
    int j=1,x=1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==str[j]){
            j++;
        }
        else{
            str[x]=str[j];
            x++;
            j++;
        }
    }
}
int main(){
    char str[10];
    cin>>str;
    dup(str);
    cout<<str<<endl;
}

