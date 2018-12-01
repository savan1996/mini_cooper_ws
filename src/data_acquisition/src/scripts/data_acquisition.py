#!/usr/bin/env python

import datetime
import os
import cv2
import time
import rospy
from std_msgs.msg import String
from sensor_msgs.msg import Image
from image_converter import ImageConverter

time_pub = rospy.Publisher('time_taken', String, queue_size = 1)
ic = ImageConverter()
global value
value = 0
def TivaC_callback(data):
    global time_pub
    value = data.data
    
def recorder(image):
    last_time = time.time()
    img = ic.imgmsg_to_opencv(image)
    time_stamp = datetime.datetime.now().strftime("%Y-%m-%d-%H-%M-%S-%f")
    cv2.imwrite(str(path) + str(time_stamp) + '.jpg',img)
    vehicle_data.write(str(time_stamp) + '\t' + str(value) + '\t' + "\r\n")
    print ('time_taken {} '.format(time.time()-last_time))
    time_pub.publish(str(format(time.time()-last_time)))

if __name__ == '__main__':
    rospy.init_node('data_recorder')
    path = rospy.get_param('~path') + str(datetime.datetime.now().strftime("%Y-%m-%d-%H-%M-%S") + '/')
    
    if os.path.exists(path):
        print('Path already exists, continuing..')
    else:
        os.makedirs(path)

    vehicle_data = open(str(path) + str(datetime.datetime.now().strftime("%Y-%m-%d-%H-%M-%S")), "w+")

    rospy.Subscriber("vehicle_data", String, TivaC_callback)
    rospy.Subscriber('/usb_cam/image_raw', Image, recorder)
    rospy.spin()
