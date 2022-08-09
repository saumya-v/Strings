#include<iostream>
using namespace std;
void reverseSt(char input[],int s,int e){
    while(s<e){
        swap(input[s],input[e]);
        s++;
        e--;
    }
}
void reverseword(char input[]){
    int j=0,i;
    for(i=0;input[i]!='\0';i++){
        if(input[i]==' '){
            reverseSt(input,j,i-1);
            j=i+1;
        }
    }
    reverseSt(input,j,i-1);
}
int main(){
    char input[100];
    cin.getline(input,100);
    reverseword(input);
    cout<<input<<endl;
}
