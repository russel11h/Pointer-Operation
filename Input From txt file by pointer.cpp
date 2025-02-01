#include<bits/stdc++.h>
using namespace std;

void printArray (int *p, int n)
{

                 for (int i = 0; i<=n ; i++)
                {

                    cout<<*(p+i)<<" ";
                 }

                 cout<<endl;


}

int main(){

srand (time(0));

ifstream fin("dslab2.txt");

int *a = new int [100];

for (int i = 0; i<100;i++)
{
    fin>>a[i];

}
printArray(a,100);







return 0;
}

