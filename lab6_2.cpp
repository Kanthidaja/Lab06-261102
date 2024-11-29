#include <iostream>
#include<cmath>
#include<string>

using namespace std;

double deg2rad(double a){
    double a1 = (a*M_PI)/180;
    return a1;
}

double rad2deg(double b){
    double b1 = (b*180)/M_PI;  
    return b1;
}

double findXComponent(double c,double d, double e, double f){
    double c1 = c*cos(e) +  d*cos(f);
    return c1;
}

double findYComponent(double g,double h,double i,double j){
    double d1 = g*sin(i) +  h*sin(j);
    return d1;
}

double pythagoras(double k,double l){
    double e1 = sqrt(pow(k,2)+pow(l,2));
    return e1;
}

void showResult(double m,double n){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << m << endl;
    cout << "Direction of the resultant vector (deg) = " << n << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
    return 0;
}