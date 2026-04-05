import os
import cv2 as cv

img=cv.imread(os.path.join('.',"white.png"))

## line
cv.line(img,(110,110),(500,500),(1,2,3),3)

## rectangle
cv.rectangle(img,(450,50),(721,200),(113,3,214),-4)

## circle
cv.circle(img,(305,305),50,(34,76,89),-7)

## text
cv.putText(img,"kissik",(505,305),cv.FONT_HERSHEY_SIMPLEX,3,(0,250,0),5)

cv.imshow("Image", img)
cv.waitKey(0)
cv.destroyAllWindows()