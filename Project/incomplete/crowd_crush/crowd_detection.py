import os
import cv2 as cv

video=cv.VideoCapture("eg.webm")
while True:
    ret,frame=video.read()
    if ret:
        cv.imshow("video",frame)
        if cv.waitKey(23) & 0xff==ord("q"):
            break

cv.destroyAllWindows()
