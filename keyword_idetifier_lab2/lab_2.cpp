#include <bits/stdc++.h>
using namespace std;

void check(string s) {
    int val=(int)s[0];
    int size=s.size();

vector<string> v = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"};

	if (find(v.begin(), v.end(), s) != v.end()) {
		cout << s << " = is a Keyword\n";
		return ;
	}
	else{

        int cnt=1;
        if(val >= 65 && val <= 90 || val == 95 || val >= 97 && val <= 122){
            for(int i=1;i<size;i++){
                    val=s[i];
                if(val >= 65 && val <= 90 || val == 95 || val >= 97 && val <= 122 || val>=48 && val<=57){
                    ++cnt;
                }
            }
            if(cnt==size)cout<<s<<" : is an identifier"<<endl;
        }
        else cout<<s<<" : is not a keyword nor an identifier"<<endl;
    }

}

int main(){
    freopen("input.txt","r",stdin);
    string s; getline(cin,s);
    stringstream ss(s);
    string word;
    while(ss >> word){
        check(word);
    }
    return 0;
}
