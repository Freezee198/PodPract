#include "ros/ros.h"
#include "std_msgs/Int32.h"
#include "iostream"
using namespace std;

int main (int argc, char **argv)
{
  ros::init(argc,argv, "node");
  ros::NodeHandle n;
  ros::Publisher chatter=n.advertise<std_msgs::Int32>("/topic",1000);
  
  ros::Rate loop_rate(1);
  int a;
  ros::Duration(5).sleep();
  while (cin>>a)
  {
    std_msgs::Int32 msg;
    msg.data=a;
    chatter.publish(msg);
    loop_rate.sleep();
  }
  return 0;
}
