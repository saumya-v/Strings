#include<iostream>
using namespace std;
bool pallin(char arr[]){
    int i,j,c;
    for(int i=0;arr[i]!='\0';i++){
        c++;
    }
    i=0;
    j=c-1;
    while(i<j){
        if(arr[i]!=arr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    char arr[100];
    cin>>arr;
    cout<<arr<<endl;
    cout<<pallin(arr)<<endl;
}
