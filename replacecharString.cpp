#include<iostream>
using namespace std;
void replacechar(char arr[],char c1,char c2){
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]==c1){
            arr[i]=c2;
        }
    }
}
int main(){
    char arr[10];
    cin>>arr;
    char c1,c2;
    cin>>c1>>c2;
    replacechar(arr,c1,c2);
    cout<<arr<<endl;
}
