#include <bits/stdc++.h>
using namespace std;
void PrintArray(int *p,int n){
for(int i=0;i<5;i++){
    cout <<p[i]<<" ";
  }
}

void OddAndEven (int *p, int n)
{
    int evenCounter= 0;
    int OddCounter= 0;
    for(int i=0; i<n ; i++)
    {
        if (p[i]%2==0)

        {
            evenCounter++;
        }
        else
        {
            OddCounter++;
        }
    }
    cout<<"Even:"<<evenCounter<<endl;
    cout<<"ODD:"<<OddCounter<<endl;
}


int main (){
int n;
cout<<"eneter your random num :";
cin>>n;
int *a=new int[n];
//generate randome num int
srand(time(0));
for (int i=0;i<n;i++){
    a[i]=rand()%1000;
}
PrintArray(a,n);
OddAndEven(a,n);


return 0;
}

