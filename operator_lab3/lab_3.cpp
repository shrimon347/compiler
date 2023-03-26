#include<bits/stdc++.h>
using namespace std;

void check(string s){
    cout<<s<< " : " ;
    //Arithmatic Operator
    if(s=="+")
        cout<<"Plus Operator"<<endl;
    else if(s=="-")
        cout<<"Minus Operator"<<endl;
    else if(s=="*")
        cout<<"Multiply Operator"<<endl;
    else if(s=="/")
        cout<<"Divide Operator"<<endl;
    else if(s=="%")
        cout<<"Modulas Operator"<<endl;

    //Logical Operator
    else if(s=="||")
        cout<<"Logical OR Operator."<<endl;
    else if(s=="&&")
        cout<<"Logical AND Operator."<<endl;
    else if(s=="!")
        cout<<"Logical NOT Operator."<<endl;

    //Assignment Operator
    else if(s=="==")
        cout<<"Equal Operator."<<endl;
    else if(s=="<")
        cout<<"Less Than Operator."<<endl;
    else if(s==">")
        cout<<"Greater Than Operator."<<endl;
    else if(s=="<=")
        cout<<"Less than or equal Operator."<<endl;
    else if(s==">=")
        cout<<"Greater than or equal Operator."<<endl;
    else if(s=="!=")
        cout<<"Not equal Operator."<<endl;

    //Relational Operator
    else if(s=="=")
        cout<<"Assign assignment Operator."<<endl;
    else if(s=="+=")
        cout<<"Add AND assignment Operator."<<endl;
    else if(s=="-=")
        cout<<"Subtract AND assignment Operator."<<endl;
    else if(s=="*=")
        cout<<"Multiply AND assignment Operator."<<endl;
    else if(s=="/=")
        cout<<"Divide AND assignment Operator."<<endl;
    else if(s=="%=")
        cout<<"Modulas AND assignment Operator."<<endl;

    else if(s=="++")
        cout<<"Increment Operator."<<endl;
    else if(s=="--")
        cout<<"Decrement Operator."<<endl;

    //Bitwise Operator
    else if(s=="|")
        cout<<"Bitwise OR Operator."<<endl;
    else if(s=="&")
        cout<<"Bitwise AND Operator."<<endl;
    else if(s=="<<")
        cout<<"Binary Left Shift Operator."<<endl;
    else if(s==">>")
        cout<<"Binary Right Shift Operator."<<endl;
    else if(s=="^")
        cout<<"Binary XOR Operator."<<endl;
    else if(s=="~")
        cout<<"Binary One's Complement Operator."<<endl;

    else
        cout<<"It's not an Operator."<<endl;
}

int main() {
    freopen("input.txt","r",stdin);
    string s; getline(cin,s);
    stringstream ss(s);
    string word;
    while(ss >> word){
        check(word);
    }
}
