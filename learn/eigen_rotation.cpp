#include <iostream>
#include <Eigen/Core>
#include <Eigen/Geometry>

#include "sophus/se3.h"
#include "sophus/so3.h"
using namespace std;

int main(int argc, char *argv[])
{
    Eigen::Matrix3d R=Eigen::AngleAxisd(M_PI/2,Eigen::Vector3d(0,0,1)).toRotationMatrix();
    Sophus::SO3 SO3_R(R);
    
    cout<<"SO3 from matrix:\n"<<SO3_R.matrix()<<endl;
    return 0;
}
