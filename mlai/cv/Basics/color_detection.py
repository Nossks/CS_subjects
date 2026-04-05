import os
import cv2 as cv
from PIL import Image
from util import get_limits

col=[0,255,0]
web=cv.VideoCapture(0)
while True:
    ret,frame=web.read()
    hsv_image=cv.cvtColor(frame,cv.COLOR_BGR2HSV)

    lower,higher=get_limits(col)

    mask=cv.inRange(hsv_image,lower,higher)

    mask_=Image.fromarray(mask)
    bbox=mask_.getbbox()

    if bbox is not None:
        x1,y1,x2,y2=bbox
        frame=cv.rectangle(frame,(x1,y1),(x2,y2),(0,0,255),5)


    cv.imshow("frame",mask)

    if cv.waitKey(40) & 0xFF==ord('e'):
        break

web.release()
cv.destroyAllWindows()