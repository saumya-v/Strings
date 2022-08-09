#include<iostream>
using namespace std;
int len(char input[]){
    int c=0;
    for(int i=0;input[i]!='\0';i++){
        c++;
    }
    return c;
}
void reverseSt(char input[],int s,int e){
    int l=len(input);
    int i=0,j=l-1;
    while(s<e){
        swap(input[s],input[e]);
        s++;
        e--;
    }
}
void reverseword(char input[]){
    int l=len(input);
    int j=0;
    int i;
    for(i=0;i<l;i++){
        if(input[i]==' '){
            reverseSt(input,j,i-1);
            j=i+1;
        }
    }
    reverseSt(input,j,i-1);
    reverseSt(input,0,l-1);
}
int main(){
    char input[100];
    cin.getline(input,100);
    reverseword(input);
    cout<<input<<endl;
}
