#include<iostream>
#include<cstring>
using namespace std;
void substring(char arr[]){
    for(int i=0;i<strlen(arr);i++){
        for(int j=i;j<strlen(arr);j++){
                for(int k=i;k<=j;k++){
                    cout<<arr[k];
                }
            cout<<endl;
        }
    }
}
int main(){
    char arr[100]="Sau";
    substring(arr);
}
