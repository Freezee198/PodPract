#include "ros/ros.h"
#include "std_msgs/Int32"
#include <iostream>
using namespace std;

void recieve(const std_msgs::Int32& num)
{
  cout << "/subscriber: data: " << num.data << endl
  return;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "subscriber")
  ros::NodeHandle n;
  ros::Subscriber sub=n.subscribe("/topic", 1000, recieve);
  ros::spin();
  return 0;
}
