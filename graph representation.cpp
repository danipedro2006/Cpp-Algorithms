#include <iostream>
#include <stdio.h>
using namespace std;
int l[10][10];
int nrVect[10];
int n;
int a[10][10];
int viz[10];//lista varfurilor vizitate

void DFS (int x){
int i;
printf("%d", x);
viz[x]=1;

for(int i=1;i<=nrVect[i];i++){
    if(!viz[a[x][i]]){
        DFS(a[x][i]);

    }
}
}


int main()
{
    cout<<"n=";cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Dati nr. vecinilor nodului "<<i<<" ";
        cin>>nrVect[i];//gradul varfului
           for(int j=1; j<=nrVect[i];j++){
            cin>>l[i][j];
                       }
           }
//afiseza lista matricea ce cuprinde  listele de adiacenta L[][]
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<l[i][j]<<" ";
    }
    cout<<endl;
}

//construieste matricea de adiacenta a[][]
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        a[i][l[i][j]]=1;
    }
}

//afiseaza matricea de adiacenta a[][]
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

//parcurgere in adancime
DFS(1);
for(int i=0;i<10;i++)
cout<<viz[i];
}

