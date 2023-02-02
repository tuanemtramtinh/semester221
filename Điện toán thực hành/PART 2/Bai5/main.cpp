#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


int main() {
    int xA,yA,xB,yB;
    for (int i=0;i<4;i++)
    {
        if (i==0) cin>>xA;
        if (i==1) cin>>yA;
        if (i==2) cin>>xB;
        if (i==3) cin>>yB;
    }
    double ManhattanDistance,EuclieanDistance;
    ManhattanDistance=abs(xA-xB)+abs(yA-yB);
    EuclieanDistance=sqrt(pow(xA-xB,2)+pow(yA-yB,2));
    cout <<"Manhattan distance: "<< ManhattanDistance<<endl;
    cout <<"Euclidean distance: "<<setprecision(2) << fixed <<EuclieanDistance;



    return 0;
}
