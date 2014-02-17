#include <pluginlib/class_list_macros.h>
#include <robot_navigator/ExplorationPlanner.h>
#include <exploration/NearestFrontierPlanner.h>

PLUGINLIB_DECLARE_CLASS(exploration, NearestFrontier, NearestFrontierPlanner, ExplorationPlanner)
PLUGINLIB_DECLARE_CLASS(exploration, MultiWavefront, MultiWavefrontPlanner, ExplorationPlanner)
PLUGINLIB_DECLARE_CLASS(exploration, MinPos, MinPosPlanner, ExplorationPlanner)