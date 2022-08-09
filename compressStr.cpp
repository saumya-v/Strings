#include<iostream>
#include<cstring>
using namespace std;
void compress(char inp[]){
    int l=strlen(inp);
    for(int i=0;i<l;i++){
        int count=1;
        while(i<l-1 && inp[i]==inp[i+1]){
            count++;
            i++;
        }
        if(count>1){
            cout<<inp[i]<<count;
        }
        else{
            cout<<inp[i];
        }
    }
}
int main(){
    char inp[100];
    cin.getline(inp,100);
    compress(inp);
}
