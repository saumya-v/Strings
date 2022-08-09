#include<iostream>
using namespace std;
void removeC(char inp[],char x){
    int i=0,j=0;
    while(inp[i]!='\0'){
        if(inp[i]==x){
            i++;
        }
        else{
            inp[j]=inp[i];
            j++;
            i++;
        }
    }
    inp[j]='\0';
}
int main(){
    char inp[100];
    char x;
    cin.getline(inp,100);
    cin>>x;
    removeC(inp,x);
    cout<<inp<<endl;
}
