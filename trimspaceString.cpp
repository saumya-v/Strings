#include<iostream>
using namespace std;
void trimspace(char input[]){
    for(int i=0;input[i]!='\0';i++){
        if(input[i]==' '){
                for(int j=i;input[j]!='\0';j++){
                    input[j]=input[j+1];
                }
        }
    }
}
int main(){
    char input[100];
    cin.getline(input,100);
    trimspace(input);
    cout<<input<<endl;
}
