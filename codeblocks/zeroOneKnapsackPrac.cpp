#include<bits/stdc++.h>
using namespace std;

pair<int ,vector<int>>
knapsack(int W, int wt[],int val[], int n)
{

    vector<vector<int>>
    dp(n+1, vector<int>(W+1,0));
    vector<vector<bool>>
    selected( n+1, vector<bool>(W+1,false));
    for(int i=1;i<=n;i++)
    {
        for(int w=1; w<=W; w++)
        {
            if(wt[i-1]<=w)
            {

                int include=val[i-1]+dp[i-1][w-wt[i-1]];
                int exclude=dp[i-1][w];
                if(include>exclude)
                {

                    dp[i][w]=include;
                    selected[i][w]=true;
                }
                else{
                    dp[i][w]=exclude;
                    selected[i][w]=false;
                }
            }
            else
            {
                dp[i][w]=dp[i-1][w];
                selected[i][w]=false;

            }

        }
    }
    int i=n, w=W;
    vector<int>selectedItems;
    while(i>0 && w>0)
    {

        if(selected[i][w])
        {

            selectedItems.push_back(i-1);
            w=w-wt[i-1];
        }
        i--;
    }
    reverse(selectedItems.begin(),selectedItems.end());
    return {dp[n][w],selectedItems};
}



int main()
{
    int n;
    cout<<"Enter the number of item:";
    cin>>n;
    int val[n],wt[n];
    cout<<"Enter the values of item:";
    for(int i=1;i<=n;i++)
    {
        cin>>val[i];
    }
    cout<<"Enter the weight of items:";
    for(int i=1;i<=n;i++)
    {

        cin>>wt[i];
    }
    int W;
    cout<<"Enter max weight:";
    cin>>W;
    pair<int , vector<int>> result =knapsack(W,wt,val,n);
    cout<<"Max value can be obtain:"<<result.first<<endl;
    cout<<"The selected items are:";
    for(int item : result.second)
    {
        cout<<item+1<<"";
    }
    cout<<endl;
}
