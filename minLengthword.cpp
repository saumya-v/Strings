#include<iostream>
#include<cstring>
using namespace std;
void minlenword(char inp[],char output[]){
    int minstart=-1;
    int minlen=INT_MAX;
    int i;
    int currstart=0;
    int l=strlen(inp);
    for(i=0;i<l;i++){
        if(inp[i]==' '){
            int currlen=i-currstart;
            if(currlen<minlen){
                minstart=currstart;
                minlen=currlen;
            }
            currstart=i+1;
        }
    }
    if(minstart==-1){
        for(int i=0;i<l;i++){
            output[i]=inp[i];
        }
    }
    else{
        int currlen=i-currstart;
        if(currlen<minlen){
            minstart=currstart;
            minlen=currlen;
        }
        int j=0;
        for(int i=minstart;i<minstart+minlen;i++){
            output[j]=inp[i];
            j++;
        }
        output[j]='\0';
    }
}
int main(){
    char inp[100],output[100];
    cin.getline(inp,100);
    minlenword(inp,output);
    cout<<output<<endl;
}
