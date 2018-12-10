#!/usr/bin/env python

import datetime
import os
import cv2
import time
import rospy
import sys

from std_msgs.msg import Int32
from sensor_msgs.msg import Image
from image_converter import ImageConverter
from drive_run import DriveRun
from config import Config
from image_process import ImageProcess



ic = ImageConverter()
config = Config()
image_process = ImageProcess()

pub=rospy.Publisher('cooper_steer', Int32, queue_size=1)

def controller(image):
	img = ic.imgmsg_to_opencv(image)
	img = img[28:-34,:]
	img = image_process.process(img)
	drive_run = DriveRun(sys.argv[1])
        measurments = drive_run.run(img)
	pub.publish(measurments)
	rate.sleep()


if __name__ == '__main__':

	try:
        	if (len(sys.argv) != 2):
			print ('Use model_path.')
			#return
	
		rospy.init_node('cooper_controller')
		rate = rospy.Rate(25)
		rospy.Subscriber('/usb_cam/image_raw', Image, controller)
		rospy.spin()

	except KeyboardInterrupt:
        	print ('\nShutdown requested. Exiting...')
