#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string str;
    cout<<"Enter the sentence:"<<endl;
    getline(cin,str);  //To get the full sentence
    
    stringstream ss(str);
    string word;
    cout<<"The words are"<<endl;
    while(ss>>word){
        cout<<word<<endl;
    }

    return 0;
}