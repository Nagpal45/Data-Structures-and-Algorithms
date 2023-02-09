#include <iostream>
using namespace std;

//array of n+1 size is used rather than n because last character is NULL.

int main(){
    // char arr[100];
    // cin>>arr;
    // cout<<arr<<endl;
    // cout<<arr[2];




    //Question-1
    //Check Palindrome
    // int n;
    // cin>>n;
    // char arr[n+1];
    // cin>>arr;

    // bool check = 1;

    // for(int i=0; i<n; i++){
    //     if(arr[i] != arr[n-1-i]){
    //         check =0;
    //         break;
    //     }
    // }
    // if(check == true){
    //     cout<<"Palindrome"<<endl;
    // }
    // else{
    //     cout<<"Not palindrome";
    // }






    //Question-2
    //largest word in a sentence
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();

    int i=0;
    int currLen = 0, maxLen=0;
    int st=0, maxst =0;
    while(1){
        if(arr[i] == ' ' || arr[i]=='\0'){
            if(currLen>maxLen){
                maxLen=currLen;
                maxst=st;
            }
            currLen = 0;
            st=i+1;
        }
        currLen++;
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout<<maxLen<<endl;
    for(int i=0; i<maxLen; i++){
        cout<<arr[i+maxst];
    }
    return 0;
}