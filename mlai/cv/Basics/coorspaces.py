import os
import cv2
img =cv2.imread(os.path.join('.','output_image.jpg'))
img_hls=cv2.cvtColor(img,cv2.COLOR_RGB2HLS)
cv2.imshow('img',img)
cv2.waitKey(0)
cv2.imshow('grbimg',img_hls)
cv2.waitKey(0)