#include<iostream>
#include<cstring>
using namespace std;
void prefix(char arr[]){
    for(int i=0;i<strlen(arr);i++){
        for(int j=0;j<=i;j++){
            cout<<arr[j];
        }
        cout<<endl;
    }
}
int main(){
    char arr[100]="Saumya";
    prefix(arr);
}

