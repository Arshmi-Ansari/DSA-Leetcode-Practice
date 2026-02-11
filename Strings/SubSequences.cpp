// SubSequences Of A String
#include<iostream>
#include<vector>
using namespace std;
void solve(string str, string output, int index, vector<string>& ans){
    if(index >= str.length()){
        if(output.length() > 0){
            ans.push_back(output);
        }
        return ;
    }
    // exclude character
    solve(str,output,index+1,ans);
    // include character
    char ch = str[index];
    output.push_back(ch);
    solve(str,output,index+1,ans);
}
int main(){
    string str = "abc";
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str,output,index,ans);
    for(string ch : ans){
        cout<<ch<<" ";
    }
}
