#!/usr/bin/env python

import datetime
import os
import cv2
import time
import rospy
from std_msgs.msg import String

time_pub = rospy.Publisher('time_taken', String, queue_size = 1)

def TivaC_callback(data):
    global time_pub
    time_stamp = datetime.datetime.now().strftime("%Y-%m-%d-%H-%M-%S-%f")
    last_time = time.time()
    incoming = data.data
    ret, frame = logitech.read()
    cv2.imwrite(str(path) + str(time_stamp) + '.jpg', frame)
    e98bda65981986ddf53afa7a40e49.write(str(time_stamp) + ',' + str(incoming) + '\r')
    print ('time_taken {} '.format(time.time()-last_time))
    time_pub.publish(str(format(time.time()-last_time)))
    
def recorder():
    rospy.Subscriber("e98bda65981986ddf53afa7a40e49", String, TivaC_callback)
    rospy.spin()

if __name__ == '__main__':
    rospy.init_node('data_recorder')
    path = rospy.get_param('~path') + str(datetime.datetime.now().strftime("%Y-%m-%d-%H-%M-%S") + '/')
    
    if os.path.exists(path):
        print('Path already exists, continuing..')
    else:
        os.makedirs(path)

    e98bda65981986ddf53afa7a40e49 = open(str(path) + str(datetime.datetime.now().strftime("%Y-%m-%d-%H-%M-%S")), "w+")
    
    logitech = cv2.VideoCapture(0)
    if logitech.isOpened():
        print('Camera connected')
    else:
        print('Camera disconnected')
        quit()

    recorder()
