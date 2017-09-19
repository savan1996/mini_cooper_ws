#!/usr/bin/env python

import rospy
from sensor_msgs.msg import Joy
from geometry_msgs.msg import Vector3

def controller_callback(data):
    remote_control = Vector3()
    remote_control.x = data.axes[0] * 255
    remote_control.y = data.axes[4] * 255
    rc_pub.publish(remote_control)

def start():
    rospy.init_node('remote_controller')
    global rc_pub
    rc_pub = rospy.Publisher('remote_controller', Vector3, queue_size = 10)
    rospy.Subscriber("joy", Joy, controller_callback)
    rospy.spin()

if __name__=='__main__':
    start()