import cv2 as cv
import os
import numpy as np

img=cv.imread(os.path.join('.',"maha.png"))
edge_img=cv.Canny(img,200,400)

##dilate
edge_d=cv.dilate(edge_img,np.ones((3,3), dtype=np.int8))

##erode
edge_e=cv.erode(edge_d,np.ones((3,3), dtype=np.int8))

cv.imshow("edge",edge_img)
cv.waitKey(0)
cv.imshow("edge",edge_d)
cv.waitKey(0)
cv.imshow("edge",edge_e)
cv.waitKey(0)