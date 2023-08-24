// code studio ip=c1O$d@eeDo1c
//              op=yes palindrome(c1OdeeDo1c)removes special char nd is case insensitive
// #include <bits/stdc++.h> 

// // remove the special cgaracters and collec the others in str
// string validString( string s)
// {

//    string str;

//    int n= s.length();
    
//     for(int i=0 ;i<n;i++)
//        {
        
//    if( s[i] >= 'a' && s[i] <='z'
//       || s[i] >= 'A'&& s[i]<='Z'
//       || s[i]>='0' &&   s[i]<='9')
//        {
//            str.push_back(s[i]);
//        }
//        }
//        return str;

// }
// // converting upper case letter to lower case
// string toLowercase(string s)
// {
//    int n= s.length();
//    for(int i =0;i<n;i++)
//    {
//    if(s[i] >= 'A' && s[i] <='Z')
//    {
//        s[i] = s[i] -'A'+'a';
//    }
//    }
//    return s;
// }
// bool checkPalindrome(string s)
// {
//    // Write your code here.
   
//     string temp = validString(s); // first time passing the main string for remove special charecters
//     string ans=toLowercase(temp); // secong time passing the  updated string ffor convert upper casev to lower case
   
//    int i= 0;
//    int j = ans.length()-1;
//    while( i<=j)
//    {
//        if( ans[i]!= ans[j])
//        {
//            return 0;
//        }
//        else
//            i++;
//        j--;
//    }
//    return 1;
// }