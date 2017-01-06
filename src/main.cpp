# include "../include/line_following.h"

int main(int argc,char **argv)
{
  ros::init(argc, argv, "stdr_line_following", ros::init_options::AnonymousName);
  jpmsc_stdr_reactive::LineFollowing obj(argc, argv);
  ros::spin();
  return 0;
}
