// gfg solved
// class Solution
// {
//     public:
//     //Function to find the maximum occurring character in a string.
//     char getMaxOccuringChar(string str)
//     {
//     int arr[26]={0};// 0 mapped with a and 25 with z
//     for(int i=0;i<str.length();i++)
//     {
//         int num=0;
//         num=str[i]-'a';// stores a character in num form
//         arr[num]++; //initially 0 and adds 1 every time same num feed
//     }
//     int maxi=-1;
//     int ans=0;
//     for(int i=0;i<26;i++)
//     {
//         if(maxi<arr[i])
//         {
//             ans=i;
//             maxi=arr[i];
//         }
//     }
//     return 'a'+ans;
//     }