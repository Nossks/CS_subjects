import os
import cv2 as cv

img=cv.imread(os.path.join('.',"bird.png"))
gray_img=cv.cvtColor(img,cv.COLOR_BGR2GRAY)
ret,thresh=cv.threshold(gray_img,130,255,cv.THRESH_BINARY_INV)

contours, hierarchy = cv.findContours(thresh, cv.RETR_TREE, cv.CHAIN_APPROX_SIMPLE)

for cnt in contours:
    if cv.contourArea(cnt)>100:
        #cv.drawContours(img,cnt,-1,(0,255,0),1)
        x,y,w,h=cv.boundingRect(cnt)
        cv.rectangle(img,(x,y),(x+w,y+h),(0,255,0),2)

cv.imshow("image",img)
cv.waitKey(0)