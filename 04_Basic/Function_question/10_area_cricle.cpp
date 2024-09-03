#include<bits/stdc++.h>
using namespace std;
float area_cricle( float radius){
    float area = 3.14 * radius * radius;
    return area;
}
int main(){
    float radius;
    cin>>radius;
    float area = area_cricle(radius);
    cout<<"Area of cricle is: "<<area;
}