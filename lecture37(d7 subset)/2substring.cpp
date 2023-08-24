// codestudio
// ip abc
// op a ab abc ac b bc c
// #include <bits/stdc++.h> 
// void solve(string str,int index,string output,vector<string> &ans)
// {
//     if(index>=str.length())
//     {
//         if(output.length()>0)
//         ans.push_back(output);
//         return;
//     }

//     //exclude
//     solve(str,index+1,output,ans);

//     //include
//     char element=str[index];
//     output.push_back(element);
//     solve(str,index+1,output,ans);
// }
// vector<string> subsequences(string str){
	
// 	    int index=0;
//         vector<string> ans;
//         string output= "";
//         solve(str,index,output,ans);
//         return ans;
        
	
// }
