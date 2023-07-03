/*
Link:https://www.codingninjas.com/studio/problems/chess-tournament_8230779?challengeSlug=striver-sde-challenge&leftPanelTab=1
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    bool valid(int mid, vector<int> pos, int players)
    {
        int count = 1, prev = 0;
        for (int i = 1; i < pos.size(); i++)
        {
            if (pos[i] - pos[prev] >= mid)
            {
                count++;
                prev = i;
            }
        }
        return count >= players;
    }
    int chessTournament(vector<int> positions, int n, int c)
    {
        // Write your code here
        sort(positions.begin(), positions.end());
        int low = 0, high = positions[n - 1] - positions[0] + 1;

        while (low < high)
        {
            int mid = low + (high - low) / 2;

            if (!valid(mid, positions, c))
                high = mid;
            else
                low = mid + 1;
        }
        return low - 1;
    }
};
int main()
{
}