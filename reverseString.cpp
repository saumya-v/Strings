#include<iostream>
using namespace std;
int len(char input[]){
    int c=0;
    for(int i=0;input[i]!='\0';i++){
        c++;
    }
    return c;
}
void reverseSt(char input[]){
    int l=len(input);
    int i=0,j=l-1;
    while(i<j){
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
}
int main(){
    char input[100];
    cin.getline(input,100);
    reverseSt(input);
    cout<<input<<endl;
}
