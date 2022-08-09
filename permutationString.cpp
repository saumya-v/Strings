#include<iostream>
using namespace std;
bool permu(char str1[],char str2[]){
    int arr[256];
    for(int i=0;i<256;i++){
        arr[i]=0;
    }
    for(int i=0;str1[i]!='\0';i++){
        arr[str1[i]]++;
    }
    for(int j=0;str2[j]!='\0';j++){
        arr[str2[j]]--;
    }
    for(int i=0;i<256;i++){
        if(arr[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    char str1[10];
    char str2[10];
    cin>>str1>>str2;
    cout<<permu(str1,str2);
}
