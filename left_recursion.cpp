#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N = 0;
    cout<<"ENTER No of NON Terminals : ";
    cin>>N;
    vector<char> nonTerminals(N);
    
    for(int i=0;i<N;i++)
    {
        cout<<i+1<<" : ";
        cin>>nonTerminals[i];
    }
      
    vector<vector <string> > productions;
    for(int i=0;i<N;i++)
    {
        vector<string> temp;
        int n;
        cout<<"Enter no of Productions for "<<nonTerminals[i]<<" : ";
        cin>>n;
        for(int j=0;j<n;j++)
        {
            string str;
            cout<<nonTerminals[i]<<"->";
            cin>>str;
            temp.push_back(str);
            // cout<<"..."<<endl;
        }
        productions.push_back(temp);
    }

    cout<<"RESULT"<<endl;

    for(int i=0;i<N;i++)
    {
        int n = 0;
        for(int j=0;j<productions[i].size();j++)
        {
            if(nonTerminals[i]==productions[i][j][0])
                n++;
        }
        if(n>0)
        {
            cout<<nonTerminals[i]<<"-> ";
            for(int j=n;j<productions[i].size();j++)
            {
                if(j!=n)
                    cout<<"|";
                cout<<productions[i][j]<<nonTerminals[i]<<"`";
            }
            cout<<endl;
        
            // cout<<nonTerminals[i]<<"->";
            cout<<nonTerminals[i]<<"`-> ";
            for(int j=0;j<n;j++)
            {
                if(j!=0)
                    cout<<"|";
                cout<<productions[i][j][1]<<productions[i][j][2]<<nonTerminals[i]<<"`";
            }
            cout<<"|epsilon"<<endl;
        
        }
        else
        {
            cout<<nonTerminals[i]<<"-> ";
            for(int j=0;j<productions[i].size();j++)
            {
                if(j!=0)
                    cout<<"|";
                cout<<productions[i][j];
            }
            cout<<endl;
        }
        
    }
    cout<<endl;
    return 0;
}