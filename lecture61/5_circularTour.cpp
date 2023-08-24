// link=https://practice.geeksforgeeks.org/problems/circular-tour-1587115620/1

// till 1:26 hr 

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

// } Driver Code Ends
/*
The structure of petrolPump is
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution
{
public:
    // Function to find starting point where the truck can start to get through
    // the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[], int n)
    {
        // Your code here
        int deficit = 0; // ek baar jo travel krliya h aur us route pr overall kitna petrol deficit tha
        int balance = 0; // har pump to pump ke beech ka balance petrol jo ki add hota rehta h
        int start = 0;

        for (int i = 0; i < n; i++)
        {
            balance += p[i].petrol - p[i].distance;
            if (balance < 0)
            {
                deficit += balance;
                start = i + 1;
                balance = 0; // reset kyuki new start point
            }
        }

        if (deficit + balance >= 0) // deficit kyuki waha ham already traverse kr chuke h and dubara nhi krnge
        //   eg maanlo deficit = -3 and ham upar loop khtm krke balance petrol 3 laye h , so tour complete ho jaygea ,cuz 3-3 = 0
        {
            return start;
        }
        else
        {
            return -1;
        }
    }
};
