#include <bits/stdc++.h>
using namespace std;

struct Point {

int x;
int y;

void printPoint(){

cout<<"("<<x<<","<<y<<")"<<endl;

}

};



int main (){

    Point p[100];
    ifstream fin("x-y.txt");


    for (int i=0; i<100; i++)
    {
        fin>>p[i].x;// dynamic memory te  . ar porriborte ->
        fin>>p[i].y;
    }

        for (int i=0; i<100; i++)
    {
        p[i].printPoint();
    }




return 0;

}




