#include <bits/stdc++.h>

using namespace std;

int main() {
    double ax1,ax2,ay1,ay2,bx1,bx2,by1,by2;
    cin>>ax1>>ay1>>ax2>>ay2>>bx1>>by1>>bx2>>by2;
    double ma=(ay2-ay1)/(ax2-ax1),mb=(by2-by1)/(bx2-bx1);
    double x = (((by1-mb*bx1)-(ay1-ma*ax1))/(ma-mb)),y =(mb*x+(by1-mb*bx1));
    double noidea;
    cout<<setprecision(1) << fixed<<x<<" "<<y<<"\n";
    return 0;
}
