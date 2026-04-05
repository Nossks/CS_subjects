import cv2
import os

img=cv2.imread(os.path.join('.',"surfer.png"))
gray_img=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)

cv2.imshow("mirmal",img)
cv2.waitKey(0)
cv2.imshow("gray image",gray_img)
cv2.waitKey(0)

ret,thresh=cv2.threshold(gray_img,50,255,cv2.THRESH_BINARY)
cv2.imshow(" simple threshing",thresh)
cv2.waitKey(0)

t2=cv2.adaptiveThreshold(gray_img,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY
                         ,11,10)
cv2.imshow("adaptive threshing",t2)
cv2.waitKey(0);