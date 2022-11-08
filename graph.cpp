#include<iostream>
using namespace std;

int graph[4][4];
void display(int R){
    
    

    
    
    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < R; ++j)
        {
            cout << graph[i][j] << " ";
        }
        cout<<endl;
    }

}
void addedge(int u,int R){
    graph[u][R]=1;
    graph[R][u]=1;
}
int main()
{

    
    addedge(0,1);
    addedge(1,1);
    addedge(0,2);
    display(4);
    return 0;
}
